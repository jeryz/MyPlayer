// |reftest| skip-if(release_or_beta) error:SyntaxError -- async-iteration is not released yet
// This file was procedurally generated from the following sources:
// - src/async-generators/yield-as-binding-identifier-escaped.case
// - src/async-generators/syntax/async-expression-named.template
/*---
description: yield is a reserved keyword within generator function bodies and may not be used as a binding identifier. (Named async generator expression)
esid: prod-AsyncGeneratorExpression
features: [async-iteration]
flags: [generated]
negative:
  phase: early
  type: SyntaxError
info: |
    Async Generator Function Definitions

    AsyncGeneratorExpression :
      async [no LineTerminator here] function * BindingIdentifier ( FormalParameters ) {
        AsyncGeneratorBody }


    BindingIdentifier : Identifier

    It is a Syntax Error if this production has a [Yield] parameter and
    StringValue of Identifier is "yield".

---*/


var gen = async function *g() {
  var yi\u0065ld;
};
