/*
 * Copyright 2014 Google Inc. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *     http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#define IN_FRUIT_CPP_FILE

#include "common.h"
#include <fruit/impl/meta/component.h>

struct A1 {};
struct B1 {};

using A = Type<A1>;
using B = Type<B1>;

void test_GetNthType() {
  AssertSameType(A, GetNthType(Int<0>, Vector<A>));
  
  AssertSameType(A, GetNthType(Int<0>, Vector<A, B>));
  AssertSameType(B, GetNthType(Int<1>, Vector<A, B>));
}

int main() {
  test_GetNthType();
  
  return 0;
}
