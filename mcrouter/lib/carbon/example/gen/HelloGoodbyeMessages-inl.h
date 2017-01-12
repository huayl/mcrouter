/*
 *  Copyright (c) 2017, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under the BSD-style license found in the
 *  LICENSE file in the root directory of this source tree. An additional grant
 *  of patent rights can be found in the PATENTS file in the same directory.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 */

namespace hellogoodbye {

template <class V>
void HelloRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void HelloRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void HelloReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
  if (!v.visitField(2, "message", message_)) {
    return;
  }
}

template <class V>
void HelloReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
  if (!v.visitField(2, "message", message_)) {
    return;
  }
}

template <class V>
void GoodbyeRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void GoodbyeRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", key_)) {
    return;
  }
}

template <class V>
void GoodbyeReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
  if (!v.visitField(2, "message", message_)) {
    return;
  }
}

template <class V>
void GoodbyeReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", result_)) {
    return;
  }
  if (!v.visitField(2, "message", message_)) {
    return;
  }
}

} // hellogoodbye
