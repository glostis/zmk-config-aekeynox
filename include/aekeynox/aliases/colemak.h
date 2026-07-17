#include <dt-bindings/zmk/keys.h>

/**
 * Action Combos
 */

#define X_UNDO  &kp CMD(Z)
#define X_CUT   &kp CMD(X)
#define X_COPY  &kp CMD(C)
#define X_PASTE &kp CMD(B)
#define X_REDO  &kp CMD(P)

#define X_CTL_W &kp LC(W)
#define X_SAVE  &kp CMD(D)
#define X_ALL   &kp CMD(A)

/**
 * Arsenik Symbols:
 *   ^<>$% @&*'`
 *   {()}= \+-/"
 *   ~[]_# |!;:?
 */

// first row
#define S_CARET &kp RA(Q)
#define S_LT    &kp RA(W)
#define S_GT    &kp RA(E)
#define S_DLLR  &kp RA(R)
#define S_PRCNT &kp RA(T)
#define S_AT    &kp RA(Y)
#define S_AMPS  &kp RA(U)
#define S_STAR  &kp RA(I)
#define S_SQT   &kp RA(O)
#define S_GRAVE &kp RA(P)

// second row
#define S_LBRC  &kp RA(A)
#define S_LPAR  &kp RA(S)
#define S_RPAR  &kp RA(D)
#define S_RBRC  &kp RA(F)
#define S_EQUAL &kp RA(G)
#define S_BSLH  &kp RA(H)
#define S_PLUS  &kp RA(J)
#define S_MINUS &kp RA(K)
#define S_FSLH  &kp RA(L)
#define S_DQT   &kp DQT

// third row
#define S_TILDE &kp RA(Z)
#define S_LBKT  &kp RA(X)
#define S_RBKT  &kp RA(C)
#define S_UNDER &kp RA(V)
#define S_HASH  &kp RA(B)
#define S_PIPE  &kp RA(N)
#define S_EXCL  &kp RA(M)
#define S_SEMI  &kp RA(COMMA)
#define S_COLON &kp RA(PERIOD)
#define S_QMARK &kp RA(FSLH)

// extra
#define S_COMMA &kp COMMA
#define S_DOT   &kp DOT
#define S_MONEY &kp LS(N1)
