// Copyright 2009 the Sputnik authors.  All rights reserved.
// This code is governed by the BSD license found in the LICENSE file.

/*---
info: The Infinity is DontDelete
es5id: 15.1.1.2_A3_T1
description: Use delete
includes: [propertyHelper.js]
---*/

// CHECK#1
verifyNotConfigurable(this, "Infinity");

try {
  if (delete this.Infinity !== false) {
    $ERROR('#1: delete Infinity === false.');
  }
} catch (e) {
  if (e instanceof Test262Error) throw e;
  assert(e instanceof TypeError);
}

reportCompare(0, 0);
