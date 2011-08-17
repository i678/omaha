// This file was GENERATED by a script.  DO NOT EDIT BY HAND!!!

// Copyright 2007, Google Inc.
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions are
// met:
//
//     * Redistributions of source code must retain the above copyright
// notice, this list of conditions and the following disclaimer.
//     * Redistributions in binary form must reproduce the above
// copyright notice, this list of conditions and the following disclaimer
// in the documentation and/or other materials provided with the
// distribution.
//     * Neither the name of Google Inc. nor the names of its
// contributors may be used to endorse or promote products derived from
// this software without specific prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
//
// Author: wan@google.com (Zhanyong Wan)

// Google Mock - a framework for writing C++ mock classes.
//
// This file implements function mockers of various arities.

#ifndef GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_FUNCTION_MOCKERS_H_
#define GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_FUNCTION_MOCKERS_H_

#include <gmock/gmock-spec-builders.h>
#include <gmock/internal/gmock-internal-utils.h>

namespace testing {
namespace internal {

template <typename F>
class FunctionMockerBase;

// Note: class FunctionMocker really belongs to the ::testing
// namespace.  However if we define it in ::testing, MSVC will
// complain when classes in ::testing::internal declare it as a
// friend class template.  To workaround this compiler bug, we define
// FunctionMocker in ::testing::internal and import it into ::testing.
template <typename F>
class FunctionMocker;

template <typename R>
class FunctionMocker<R()> : public
    internal::FunctionMockerBase<R()> {
 public:
  typedef R F();
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With() {
    return this->current_spec();
  }

  R Invoke() {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple());
  }
};

template <typename R, typename A1>
class FunctionMocker<R(A1)> : public
    internal::FunctionMockerBase<R(A1)> {
 public:
  typedef R F(A1);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1));
    return this->current_spec();
  }

  R Invoke(A1 a1) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1));
  }
};

template <typename R, typename A1, typename A2>
class FunctionMocker<R(A1, A2)> : public
    internal::FunctionMockerBase<R(A1, A2)> {
 public:
  typedef R F(A1, A2);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2));
  }
};

template <typename R, typename A1, typename A2, typename A3>
class FunctionMocker<R(A1, A2, A3)> : public
    internal::FunctionMockerBase<R(A1, A2, A3)> {
 public:
  typedef R F(A1, A2, A3);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4>
class FunctionMocker<R(A1, A2, A3, A4)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4)> {
 public:
  typedef R F(A1, A2, A3, A4);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4,
    typename A5>
class FunctionMocker<R(A1, A2, A3, A4, A5)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4, A5)> {
 public:
  typedef R F(A1, A2, A3, A4, A5);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4, const Matcher<A5>& m5) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4,
        m5));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4, a5));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4,
    typename A5, typename A6>
class FunctionMocker<R(A1, A2, A3, A4, A5, A6)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4, A5, A6)> {
 public:
  typedef R F(A1, A2, A3, A4, A5, A6);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4, const Matcher<A5>& m5,
      const Matcher<A6>& m6) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4, m5,
        m6));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4, a5, a6));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4,
    typename A5, typename A6, typename A7>
class FunctionMocker<R(A1, A2, A3, A4, A5, A6, A7)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4, A5, A6, A7)> {
 public:
  typedef R F(A1, A2, A3, A4, A5, A6, A7);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4, const Matcher<A5>& m5,
      const Matcher<A6>& m6, const Matcher<A7>& m7) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4, m5,
        m6, m7));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4, a5, a6, a7));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4,
    typename A5, typename A6, typename A7, typename A8>
class FunctionMocker<R(A1, A2, A3, A4, A5, A6, A7, A8)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4, A5, A6, A7, A8)> {
 public:
  typedef R F(A1, A2, A3, A4, A5, A6, A7, A8);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4, const Matcher<A5>& m5,
      const Matcher<A6>& m6, const Matcher<A7>& m7, const Matcher<A8>& m8) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4, m5,
        m6, m7, m8));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4, a5, a6, a7, a8));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4,
    typename A5, typename A6, typename A7, typename A8, typename A9>
class FunctionMocker<R(A1, A2, A3, A4, A5, A6, A7, A8, A9)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4, A5, A6, A7, A8, A9)> {
 public:
  typedef R F(A1, A2, A3, A4, A5, A6, A7, A8, A9);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4, const Matcher<A5>& m5,
      const Matcher<A6>& m6, const Matcher<A7>& m7, const Matcher<A8>& m8,
      const Matcher<A9>& m9) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4, m5,
        m6, m7, m8, m9));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4, a5, a6, a7, a8, a9));
  }
};

template <typename R, typename A1, typename A2, typename A3, typename A4,
    typename A5, typename A6, typename A7, typename A8, typename A9,
    typename A10>
class FunctionMocker<R(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)> : public
    internal::FunctionMockerBase<R(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10)> {
 public:
  typedef R F(A1, A2, A3, A4, A5, A6, A7, A8, A9, A10);
  typedef typename internal::Function<F>::ArgumentTuple ArgumentTuple;

  MockSpec<F>& With(const Matcher<A1>& m1, const Matcher<A2>& m2,
      const Matcher<A3>& m3, const Matcher<A4>& m4, const Matcher<A5>& m5,
      const Matcher<A6>& m6, const Matcher<A7>& m7, const Matcher<A8>& m8,
      const Matcher<A9>& m9, const Matcher<A10>& m10) {
    this->current_spec().SetMatchers(::std::tr1::make_tuple(m1, m2, m3, m4, m5,
        m6, m7, m8, m9, m10));
    return this->current_spec();
  }

  R Invoke(A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9,
      A10 a10) {
    // Even though gcc and MSVC don't enforce it, 'this->' is required
    // by the C++ standard [14.6.4] here, as the base class type is
    // dependent on the template argument (and thus shouldn't be
    // looked into when resolving InvokeWith).
    return this->InvokeWith(ArgumentTuple(a1, a2, a3, a4, a5, a6, a7, a8, a9,
        a10));
  }
};

}  // namespace internal

// The style guide prohibits "using" statements in a namespace scope
// inside a header file.  However, the FunctionMocker class template
// is meant to be defined in the ::testing namespace.  The following
// line is just a trick for working around a bug in MSVC 8.0, which
// cannot handle it if we define FunctionMocker in ::testing.
using internal::FunctionMocker;

// The result type of function type F.
// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_RESULT_(tn, F) tn ::testing::internal::Function<F>::Result

// The type of argument N of function type F.
// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_ARG_(tn, F, N) tn ::testing::internal::Function<F>::Argument##N

// The matcher type for argument N of function type F.
// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_MATCHER_(tn, F, N) const ::testing::Matcher<GMOCK_ARG_(tn, F, N)>&

// The variable for mocking the given method.
// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_MOCKER_(arity, constness, Method) \
    GMOCK_CONCAT_TOKEN_(gmock##constness##arity##_##Method##_, __LINE__)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD0_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method() constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 0, \
        this_method_does_not_take_0_arguments); \
    GMOCK_MOCKER_(0, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(0, constness, Method).Invoke(); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method() constness { \
    return GMOCK_MOCKER_(0, constness, Method).RegisterOwner(this).With(); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(0, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD1_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 1, \
        this_method_does_not_take_1_argument); \
    GMOCK_MOCKER_(1, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(1, constness, Method).Invoke(gmock_a1); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1) constness { \
    return GMOCK_MOCKER_(1, constness, \
        Method).RegisterOwner(this).With(gmock_a1); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(1, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD2_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 2, \
        this_method_does_not_take_2_arguments); \
    GMOCK_MOCKER_(2, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(2, constness, Method).Invoke(gmock_a1, gmock_a2); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2) constness { \
    return GMOCK_MOCKER_(2, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(2, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD3_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 3, \
        this_method_does_not_take_3_arguments); \
    GMOCK_MOCKER_(3, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(3, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3) constness { \
    return GMOCK_MOCKER_(3, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(3, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD4_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 4, \
        this_method_does_not_take_4_arguments); \
    GMOCK_MOCKER_(4, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(4, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4) constness { \
    return GMOCK_MOCKER_(4, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(4, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD5_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4, \
                                 GMOCK_ARG_(tn, F, 5) gmock_a5) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 5, \
        this_method_does_not_take_5_arguments); \
    GMOCK_MOCKER_(5, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(5, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4, gmock_a5); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4, \
                     GMOCK_MATCHER_(tn, F, 5) gmock_a5) constness { \
    return GMOCK_MOCKER_(5, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4, gmock_a5); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(5, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD6_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4, \
                                 GMOCK_ARG_(tn, F, 5) gmock_a5, \
                                 GMOCK_ARG_(tn, F, 6) gmock_a6) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 6, \
        this_method_does_not_take_6_arguments); \
    GMOCK_MOCKER_(6, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(6, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4, gmock_a5, gmock_a6); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4, \
                     GMOCK_MATCHER_(tn, F, 5) gmock_a5, \
                     GMOCK_MATCHER_(tn, F, 6) gmock_a6) constness { \
    return GMOCK_MOCKER_(6, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4, gmock_a5, gmock_a6); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(6, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD7_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4, \
                                 GMOCK_ARG_(tn, F, 5) gmock_a5, \
                                 GMOCK_ARG_(tn, F, 6) gmock_a6, \
                                 GMOCK_ARG_(tn, F, 7) gmock_a7) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 7, \
        this_method_does_not_take_7_arguments); \
    GMOCK_MOCKER_(7, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(7, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4, gmock_a5, gmock_a6, gmock_a7); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4, \
                     GMOCK_MATCHER_(tn, F, 5) gmock_a5, \
                     GMOCK_MATCHER_(tn, F, 6) gmock_a6, \
                     GMOCK_MATCHER_(tn, F, 7) gmock_a7) constness { \
    return GMOCK_MOCKER_(7, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4, gmock_a5, gmock_a6, gmock_a7); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(7, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD8_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4, \
                                 GMOCK_ARG_(tn, F, 5) gmock_a5, \
                                 GMOCK_ARG_(tn, F, 6) gmock_a6, \
                                 GMOCK_ARG_(tn, F, 7) gmock_a7, \
                                 GMOCK_ARG_(tn, F, 8) gmock_a8) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 8, \
        this_method_does_not_take_8_arguments); \
    GMOCK_MOCKER_(8, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(8, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4, gmock_a5, gmock_a6, gmock_a7, gmock_a8); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4, \
                     GMOCK_MATCHER_(tn, F, 5) gmock_a5, \
                     GMOCK_MATCHER_(tn, F, 6) gmock_a6, \
                     GMOCK_MATCHER_(tn, F, 7) gmock_a7, \
                     GMOCK_MATCHER_(tn, F, 8) gmock_a8) constness { \
    return GMOCK_MOCKER_(8, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4, gmock_a5, gmock_a6, gmock_a7, gmock_a8); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(8, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD9_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4, \
                                 GMOCK_ARG_(tn, F, 5) gmock_a5, \
                                 GMOCK_ARG_(tn, F, 6) gmock_a6, \
                                 GMOCK_ARG_(tn, F, 7) gmock_a7, \
                                 GMOCK_ARG_(tn, F, 8) gmock_a8, \
                                 GMOCK_ARG_(tn, F, 9) gmock_a9) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 9, \
        this_method_does_not_take_9_arguments); \
    GMOCK_MOCKER_(9, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(9, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4, gmock_a5, gmock_a6, gmock_a7, gmock_a8, \
        gmock_a9); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4, \
                     GMOCK_MATCHER_(tn, F, 5) gmock_a5, \
                     GMOCK_MATCHER_(tn, F, 6) gmock_a6, \
                     GMOCK_MATCHER_(tn, F, 7) gmock_a7, \
                     GMOCK_MATCHER_(tn, F, 8) gmock_a8, \
                     GMOCK_MATCHER_(tn, F, 9) gmock_a9) constness { \
    return GMOCK_MOCKER_(9, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4, gmock_a5, gmock_a6, gmock_a7, gmock_a8, gmock_a9); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(9, constness, Method)

// INTERNAL IMPLEMENTATION - DON'T USE IN USER CODE!!!
#define GMOCK_METHOD10_(tn, constness, ct, Method, F) \
  GMOCK_RESULT_(tn, F) ct Method(GMOCK_ARG_(tn, F, 1) gmock_a1, \
                                 GMOCK_ARG_(tn, F, 2) gmock_a2, \
                                 GMOCK_ARG_(tn, F, 3) gmock_a3, \
                                 GMOCK_ARG_(tn, F, 4) gmock_a4, \
                                 GMOCK_ARG_(tn, F, 5) gmock_a5, \
                                 GMOCK_ARG_(tn, F, 6) gmock_a6, \
                                 GMOCK_ARG_(tn, F, 7) gmock_a7, \
                                 GMOCK_ARG_(tn, F, 8) gmock_a8, \
                                 GMOCK_ARG_(tn, F, 9) gmock_a9, \
                                 GMOCK_ARG_(tn, F, 10) gmock_a10) constness { \
    GMOCK_COMPILE_ASSERT_(::std::tr1::tuple_size< \
        tn ::testing::internal::Function<F>::ArgumentTuple>::value == 10, \
        this_method_does_not_take_10_arguments); \
    GMOCK_MOCKER_(10, constness, Method).SetOwnerAndName(this, #Method); \
    return GMOCK_MOCKER_(10, constness, Method).Invoke(gmock_a1, gmock_a2, \
        gmock_a3, gmock_a4, gmock_a5, gmock_a6, gmock_a7, gmock_a8, gmock_a9, \
        gmock_a10); \
  } \
  ::testing::MockSpec<F>& \
      gmock_##Method(GMOCK_MATCHER_(tn, F, 1) gmock_a1, \
                     GMOCK_MATCHER_(tn, F, 2) gmock_a2, \
                     GMOCK_MATCHER_(tn, F, 3) gmock_a3, \
                     GMOCK_MATCHER_(tn, F, 4) gmock_a4, \
                     GMOCK_MATCHER_(tn, F, 5) gmock_a5, \
                     GMOCK_MATCHER_(tn, F, 6) gmock_a6, \
                     GMOCK_MATCHER_(tn, F, 7) gmock_a7, \
                     GMOCK_MATCHER_(tn, F, 8) gmock_a8, \
                     GMOCK_MATCHER_(tn, F, 9) gmock_a9, \
                     GMOCK_MATCHER_(tn, F, 10) gmock_a10) constness { \
    return GMOCK_MOCKER_(10, constness, \
        Method).RegisterOwner(this).With(gmock_a1, gmock_a2, gmock_a3, \
        gmock_a4, gmock_a5, gmock_a6, gmock_a7, gmock_a8, gmock_a9, \
        gmock_a10); \
  } \
  mutable ::testing::FunctionMocker<F> GMOCK_MOCKER_(10, constness, Method)

#define MOCK_METHOD0(m, F) GMOCK_METHOD0_(, , , m, F)
#define MOCK_METHOD1(m, F) GMOCK_METHOD1_(, , , m, F)
#define MOCK_METHOD2(m, F) GMOCK_METHOD2_(, , , m, F)
#define MOCK_METHOD3(m, F) GMOCK_METHOD3_(, , , m, F)
#define MOCK_METHOD4(m, F) GMOCK_METHOD4_(, , , m, F)
#define MOCK_METHOD5(m, F) GMOCK_METHOD5_(, , , m, F)
#define MOCK_METHOD6(m, F) GMOCK_METHOD6_(, , , m, F)
#define MOCK_METHOD7(m, F) GMOCK_METHOD7_(, , , m, F)
#define MOCK_METHOD8(m, F) GMOCK_METHOD8_(, , , m, F)
#define MOCK_METHOD9(m, F) GMOCK_METHOD9_(, , , m, F)
#define MOCK_METHOD10(m, F) GMOCK_METHOD10_(, , , m, F)

#define MOCK_CONST_METHOD0(m, F) GMOCK_METHOD0_(, const, , m, F)
#define MOCK_CONST_METHOD1(m, F) GMOCK_METHOD1_(, const, , m, F)
#define MOCK_CONST_METHOD2(m, F) GMOCK_METHOD2_(, const, , m, F)
#define MOCK_CONST_METHOD3(m, F) GMOCK_METHOD3_(, const, , m, F)
#define MOCK_CONST_METHOD4(m, F) GMOCK_METHOD4_(, const, , m, F)
#define MOCK_CONST_METHOD5(m, F) GMOCK_METHOD5_(, const, , m, F)
#define MOCK_CONST_METHOD6(m, F) GMOCK_METHOD6_(, const, , m, F)
#define MOCK_CONST_METHOD7(m, F) GMOCK_METHOD7_(, const, , m, F)
#define MOCK_CONST_METHOD8(m, F) GMOCK_METHOD8_(, const, , m, F)
#define MOCK_CONST_METHOD9(m, F) GMOCK_METHOD9_(, const, , m, F)
#define MOCK_CONST_METHOD10(m, F) GMOCK_METHOD10_(, const, , m, F)

#define MOCK_METHOD0_T(m, F) GMOCK_METHOD0_(typename, , , m, F)
#define MOCK_METHOD1_T(m, F) GMOCK_METHOD1_(typename, , , m, F)
#define MOCK_METHOD2_T(m, F) GMOCK_METHOD2_(typename, , , m, F)
#define MOCK_METHOD3_T(m, F) GMOCK_METHOD3_(typename, , , m, F)
#define MOCK_METHOD4_T(m, F) GMOCK_METHOD4_(typename, , , m, F)
#define MOCK_METHOD5_T(m, F) GMOCK_METHOD5_(typename, , , m, F)
#define MOCK_METHOD6_T(m, F) GMOCK_METHOD6_(typename, , , m, F)
#define MOCK_METHOD7_T(m, F) GMOCK_METHOD7_(typename, , , m, F)
#define MOCK_METHOD8_T(m, F) GMOCK_METHOD8_(typename, , , m, F)
#define MOCK_METHOD9_T(m, F) GMOCK_METHOD9_(typename, , , m, F)
#define MOCK_METHOD10_T(m, F) GMOCK_METHOD10_(typename, , , m, F)

#define MOCK_CONST_METHOD0_T(m, F) GMOCK_METHOD0_(typename, const, , m, F)
#define MOCK_CONST_METHOD1_T(m, F) GMOCK_METHOD1_(typename, const, , m, F)
#define MOCK_CONST_METHOD2_T(m, F) GMOCK_METHOD2_(typename, const, , m, F)
#define MOCK_CONST_METHOD3_T(m, F) GMOCK_METHOD3_(typename, const, , m, F)
#define MOCK_CONST_METHOD4_T(m, F) GMOCK_METHOD4_(typename, const, , m, F)
#define MOCK_CONST_METHOD5_T(m, F) GMOCK_METHOD5_(typename, const, , m, F)
#define MOCK_CONST_METHOD6_T(m, F) GMOCK_METHOD6_(typename, const, , m, F)
#define MOCK_CONST_METHOD7_T(m, F) GMOCK_METHOD7_(typename, const, , m, F)
#define MOCK_CONST_METHOD8_T(m, F) GMOCK_METHOD8_(typename, const, , m, F)
#define MOCK_CONST_METHOD9_T(m, F) GMOCK_METHOD9_(typename, const, , m, F)
#define MOCK_CONST_METHOD10_T(m, F) GMOCK_METHOD10_(typename, const, , m, F)

#define MOCK_METHOD0_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD0_(, , ct, m, F)
#define MOCK_METHOD1_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD1_(, , ct, m, F)
#define MOCK_METHOD2_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD2_(, , ct, m, F)
#define MOCK_METHOD3_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD3_(, , ct, m, F)
#define MOCK_METHOD4_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD4_(, , ct, m, F)
#define MOCK_METHOD5_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD5_(, , ct, m, F)
#define MOCK_METHOD6_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD6_(, , ct, m, F)
#define MOCK_METHOD7_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD7_(, , ct, m, F)
#define MOCK_METHOD8_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD8_(, , ct, m, F)
#define MOCK_METHOD9_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD9_(, , ct, m, F)
#define MOCK_METHOD10_WITH_CALLTYPE(ct, m, F) GMOCK_METHOD10_(, , ct, m, F)

#define MOCK_CONST_METHOD0_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD0_(, const, ct, m, F)
#define MOCK_CONST_METHOD1_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD1_(, const, ct, m, F)
#define MOCK_CONST_METHOD2_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD2_(, const, ct, m, F)
#define MOCK_CONST_METHOD3_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD3_(, const, ct, m, F)
#define MOCK_CONST_METHOD4_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD4_(, const, ct, m, F)
#define MOCK_CONST_METHOD5_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD5_(, const, ct, m, F)
#define MOCK_CONST_METHOD6_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD6_(, const, ct, m, F)
#define MOCK_CONST_METHOD7_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD7_(, const, ct, m, F)
#define MOCK_CONST_METHOD8_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD8_(, const, ct, m, F)
#define MOCK_CONST_METHOD9_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD9_(, const, ct, m, F)
#define MOCK_CONST_METHOD10_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD10_(, const, ct, m, F)

#define MOCK_METHOD0_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD0_(typename, , ct, m, F)
#define MOCK_METHOD1_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD1_(typename, , ct, m, F)
#define MOCK_METHOD2_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD2_(typename, , ct, m, F)
#define MOCK_METHOD3_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD3_(typename, , ct, m, F)
#define MOCK_METHOD4_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD4_(typename, , ct, m, F)
#define MOCK_METHOD5_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD5_(typename, , ct, m, F)
#define MOCK_METHOD6_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD6_(typename, , ct, m, F)
#define MOCK_METHOD7_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD7_(typename, , ct, m, F)
#define MOCK_METHOD8_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD8_(typename, , ct, m, F)
#define MOCK_METHOD9_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD9_(typename, , ct, m, F)
#define MOCK_METHOD10_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD10_(typename, , ct, m, F)

#define MOCK_CONST_METHOD0_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD0_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD1_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD1_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD2_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD2_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD3_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD3_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD4_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD4_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD5_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD5_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD6_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD6_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD7_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD7_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD8_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD8_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD9_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD9_(typename, const, ct, m, F)
#define MOCK_CONST_METHOD10_T_WITH_CALLTYPE(ct, m, F) \
    GMOCK_METHOD10_(typename, const, ct, m, F)

// A MockFunction<F> class has one mock method whose type is F.  It is
// useful when you just want your test code to emit some messages and
// have Google Mock verify the right messages are sent (and perhaps at
// the right times).  For example, if you are exercising code:
//
//   Foo(1);
//   Foo(2);
//   Foo(3);
//
// and want to verify that Foo(1) and Foo(3) both invoke
// mock.Bar("a"), but Foo(2) doesn't invoke anything, you can write:
//
// TEST(FooTest, InvokesBarCorrectly) {
//   MyMock mock;
//   MockFunction<void(string check_point_name)> check;
//   {
//     InSequence s;
//
//     EXPECT_CALL(mock, Bar("a"));
//     EXPECT_CALL(check, Call("1"));
//     EXPECT_CALL(check, Call("2"));
//     EXPECT_CALL(mock, Bar("a"));
//   }
//   Foo(1);
//   check.Call("1");
//   Foo(2);
//   check.Call("2");
//   Foo(3);
// }
//
// The expectation spec says that the first Bar("a") must happen
// before check point "1", the second Bar("a") must happen after check
// point "2", and nothing should happen between the two check
// points. The explicit check points make it easy to tell which
// Bar("a") is called by which call to Foo().
template <typename F>
class MockFunction;

template <typename R>
class MockFunction<R()> {
 public:
  MOCK_METHOD0_T(Call, R());
};

template <typename R, typename A0>
class MockFunction<R(A0)> {
 public:
  MOCK_METHOD1_T(Call, R(A0));
};

template <typename R, typename A0, typename A1>
class MockFunction<R(A0, A1)> {
 public:
  MOCK_METHOD2_T(Call, R(A0, A1));
};

template <typename R, typename A0, typename A1, typename A2>
class MockFunction<R(A0, A1, A2)> {
 public:
  MOCK_METHOD3_T(Call, R(A0, A1, A2));
};

template <typename R, typename A0, typename A1, typename A2, typename A3>
class MockFunction<R(A0, A1, A2, A3)> {
 public:
  MOCK_METHOD4_T(Call, R(A0, A1, A2, A3));
};

template <typename R, typename A0, typename A1, typename A2, typename A3,
    typename A4>
class MockFunction<R(A0, A1, A2, A3, A4)> {
 public:
  MOCK_METHOD5_T(Call, R(A0, A1, A2, A3, A4));
};

template <typename R, typename A0, typename A1, typename A2, typename A3,
    typename A4, typename A5>
class MockFunction<R(A0, A1, A2, A3, A4, A5)> {
 public:
  MOCK_METHOD6_T(Call, R(A0, A1, A2, A3, A4, A5));
};

template <typename R, typename A0, typename A1, typename A2, typename A3,
    typename A4, typename A5, typename A6>
class MockFunction<R(A0, A1, A2, A3, A4, A5, A6)> {
 public:
  MOCK_METHOD7_T(Call, R(A0, A1, A2, A3, A4, A5, A6));
};

template <typename R, typename A0, typename A1, typename A2, typename A3,
    typename A4, typename A5, typename A6, typename A7>
class MockFunction<R(A0, A1, A2, A3, A4, A5, A6, A7)> {
 public:
  MOCK_METHOD8_T(Call, R(A0, A1, A2, A3, A4, A5, A6, A7));
};

template <typename R, typename A0, typename A1, typename A2, typename A3,
    typename A4, typename A5, typename A6, typename A7, typename A8>
class MockFunction<R(A0, A1, A2, A3, A4, A5, A6, A7, A8)> {
 public:
  MOCK_METHOD9_T(Call, R(A0, A1, A2, A3, A4, A5, A6, A7, A8));
};

template <typename R, typename A0, typename A1, typename A2, typename A3,
    typename A4, typename A5, typename A6, typename A7, typename A8,
    typename A9>
class MockFunction<R(A0, A1, A2, A3, A4, A5, A6, A7, A8, A9)> {
 public:
  MOCK_METHOD10_T(Call, R(A0, A1, A2, A3, A4, A5, A6, A7, A8, A9));
};

}  // namespace testing

#endif  // GMOCK_INCLUDE_GMOCK_GMOCK_GENERATED_FUNCTION_MOCKERS_H_
