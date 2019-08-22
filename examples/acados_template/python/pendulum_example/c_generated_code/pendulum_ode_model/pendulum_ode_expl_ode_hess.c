/* This file was automatically generated by CasADi.
   The CasADi copyright holders make no ownership claim of its contents. */
#ifdef __cplusplus
extern "C" {
#endif

/* How to prefix internal symbols */
#ifdef CODEGEN_PREFIX
  #define NAMESPACE_CONCAT(NS, ID) _NAMESPACE_CONCAT(NS, ID)
  #define _NAMESPACE_CONCAT(NS, ID) NS ## ID
  #define CASADI_PREFIX(ID) NAMESPACE_CONCAT(CODEGEN_PREFIX, ID)
#else
  #define CASADI_PREFIX(ID) pendulum_ode_expl_ode_hess_ ## ID
#endif

#include <math.h>

#ifndef casadi_real
#define casadi_real double
#endif

#ifndef casadi_int
#define casadi_int int
#endif

/* Add prefix to internal symbols */
#define casadi_f0 CASADI_PREFIX(f0)
#define casadi_s0 CASADI_PREFIX(s0)
#define casadi_s1 CASADI_PREFIX(s1)
#define casadi_s2 CASADI_PREFIX(s2)
#define casadi_s3 CASADI_PREFIX(s3)
#define casadi_s4 CASADI_PREFIX(s4)

/* Symbol visibility in DLLs */
#ifndef CASADI_SYMBOL_EXPORT
  #if defined(_WIN32) || defined(__WIN32__) || defined(__CYGWIN__)
    #if defined(STATIC_LINKED)
      #define CASADI_SYMBOL_EXPORT
    #else
      #define CASADI_SYMBOL_EXPORT __declspec(dllexport)
    #endif
  #elif defined(__GNUC__) && defined(GCC_HASCLASSVISIBILITY)
    #define CASADI_SYMBOL_EXPORT __attribute__ ((visibility ("default")))
  #else
    #define CASADI_SYMBOL_EXPORT
  #endif
#endif

static const casadi_int casadi_s0[8] = {4, 1, 0, 4, 0, 1, 2, 3};
static const casadi_int casadi_s1[23] = {4, 4, 0, 4, 8, 12, 16, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3, 0, 1, 2, 3};
static const casadi_int casadi_s2[5] = {1, 1, 0, 1, 0};
static const casadi_int casadi_s3[9] = {5, 1, 0, 5, 0, 1, 2, 3, 4};
static const casadi_int casadi_s4[19] = {15, 1, 0, 15, 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

/* pendulum_ode_expl_ode_hess:(i0[4],i1[4x4],i2[4],i3[4],i4)->(o0[5],o1[15]) */
static int casadi_f0(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem) {
  casadi_real a0, a1, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19, a2, a20, a21, a22, a23, a24, a25, a26, a27, a28, a29, a3, a30, a31, a32, a33, a34, a35, a36, a37, a38, a39, a4, a40, a41, a42, a43, a44, a45, a46, a47, a48, a49, a5, a50, a51, a52, a53, a54, a55, a56, a57, a58, a59, a6, a60, a61, a62, a63, a64, a65, a66, a67, a68, a69, a7, a70, a71, a72, a73, a74, a75, a76, a77, a78, a79, a8, a80, a81, a82, a83, a84, a85, a86, a87, a88, a89, a9, a90, a91, a92, a93, a94, a95;
  a0=0.;
  if (res[0]!=0) res[0][0]=a0;
  a0=arg[3] ? arg[3][0] : 0;
  if (res[0]!=0) res[0][1]=a0;
  a0=arg[0] ? arg[0][2] : 0;
  a1=cos(a0);
  a2=1.0791000000000002e+01;
  a3=arg[3] ? arg[3][3] : 0;
  a4=8.0000000000000004e-01;
  a5=1.1000000000000001e+00;
  a6=1.0000000000000001e-01;
  a7=cos(a0);
  a7=(a6*a7);
  a8=cos(a0);
  a9=(a7*a8);
  a5=(a5-a9);
  a9=(a4*a5);
  a10=(a3/a9);
  a11=(a2*a10);
  a12=(a1*a11);
  a13=sin(a0);
  a14=arg[4] ? arg[4][0] : 0;
  a15=(a14*a10);
  a16=(a13*a15);
  a12=(a12-a16);
  a16=cos(a0);
  a17=-8.0000000000000016e-02;
  a18=cos(a0);
  a18=(a17*a18);
  a19=arg[0] ? arg[0][3] : 0;
  a20=(a19*a10);
  a21=(a19*a20);
  a22=(a18*a21);
  a23=(a16*a22);
  a12=(a12+a23);
  a23=sin(a0);
  a24=sin(a0);
  a25=(a24*a21);
  a25=(a17*a25);
  a26=(a23*a25);
  a12=(a12-a26);
  a26=sin(a0);
  a27=(a18*a24);
  a28=(a27*a19);
  a29=(a28*a19);
  a30=cos(a0);
  a31=(a14*a30);
  a29=(a29+a31);
  a31=sin(a0);
  a31=(a2*a31);
  a29=(a29+a31);
  a29=(a29/a9);
  a31=(a29/a9);
  a32=(a31*a3);
  a32=(a4*a32);
  a33=sin(a0);
  a33=(a17*a33);
  a34=(a33*a19);
  a35=(a34*a19);
  a36=9.8100000000000009e-01;
  a37=cos(a0);
  a37=(a36*a37);
  a38=sin(a0);
  a39=(a37*a38);
  a35=(a35+a39);
  a35=(a35+a14);
  a35=(a35/a5);
  a39=(a35/a5);
  a40=arg[3] ? arg[3][2] : 0;
  a41=(a39*a40);
  a32=(a32+a41);
  a41=(a7*a32);
  a42=(a26*a41);
  a12=(a12-a42);
  a42=sin(a0);
  a43=(a8*a32);
  a43=(a6*a43);
  a44=(a42*a43);
  a12=(a12-a44);
  a44=cos(a0);
  a45=(a40/a5);
  a46=(a37*a45);
  a47=(a44*a46);
  a12=(a12+a47);
  a47=sin(a0);
  a48=(a38*a45);
  a48=(a36*a48);
  a49=(a47*a48);
  a12=(a12-a49);
  a49=cos(a0);
  a50=(a19*a45);
  a51=(a19*a50);
  a51=(a17*a51);
  a52=(a49*a51);
  a12=(a12+a52);
  if (res[0]!=0) res[0][2]=a12;
  a12=(a28*a10);
  a52=(a27*a20);
  a12=(a12+a52);
  a52=(a34*a45);
  a12=(a12+a52);
  a52=(a33*a50);
  a12=(a12+a52);
  a52=arg[3] ? arg[3][1] : 0;
  a12=(a12+a52);
  if (res[0]!=0) res[0][3]=a12;
  a12=(a30*a10);
  a12=(a12+a45);
  if (res[0]!=0) res[0][4]=a12;
  a12=arg[1] ? arg[1][2] : 0;
  a52=arg[1] ? arg[1][3] : 0;
  a53=(a20*a52);
  a54=(a10*a52);
  a55=(a10/a9);
  a56=sin(a0);
  a57=(a56*a12);
  a57=(a6*a57);
  a58=(a8*a57);
  a59=sin(a0);
  a60=(a59*a12);
  a61=(a7*a60);
  a58=(a58+a61);
  a61=(a4*a58);
  a62=(a55*a61);
  a63=(a19*a62);
  a54=(a54-a63);
  a63=(a19*a54);
  a53=(a53+a63);
  a63=(a18*a53);
  a64=sin(a0);
  a65=(a64*a12);
  a65=(a17*a65);
  a66=(a21*a65);
  a63=(a63-a66);
  a63=(a16*a63);
  a66=sin(a0);
  a67=(a66*a12);
  a67=(a22*a67);
  a63=(a63-a67);
  a67=sin(a0);
  a68=(a67*a12);
  a68=(a11*a68);
  a69=(a2*a62);
  a69=(a1*a69);
  a68=(a68+a69);
  a69=cos(a0);
  a70=(a69*a12);
  a70=(a15*a70);
  a71=(a14*a62);
  a71=(a13*a71);
  a70=(a70-a71);
  a68=(a68+a70);
  a63=(a63-a68);
  a68=cos(a0);
  a70=(a68*a12);
  a70=(a25*a70);
  a71=cos(a0);
  a72=(a71*a12);
  a73=(a21*a72);
  a53=(a24*a53);
  a73=(a73+a53);
  a73=(a17*a73);
  a73=(a23*a73);
  a70=(a70+a73);
  a63=(a63-a70);
  a70=cos(a0);
  a73=(a70*a12);
  a73=(a41*a73);
  a72=(a18*a72);
  a65=(a24*a65);
  a72=(a72-a65);
  a65=(a19*a72);
  a53=(a27*a52);
  a65=(a65+a53);
  a53=(a19*a65);
  a74=(a28*a52);
  a53=(a53+a74);
  a74=sin(a0);
  a75=(a74*a12);
  a76=(a14*a75);
  a53=(a53-a76);
  a76=cos(a0);
  a77=(a76*a12);
  a77=(a2*a77);
  a53=(a53+a77);
  a53=(a53/a9);
  a29=(a29/a9);
  a77=(a29*a61);
  a53=(a53-a77);
  a53=(a53/a9);
  a31=(a31/a9);
  a61=(a31*a61);
  a53=(a53-a61);
  a53=(a3*a53);
  a53=(a4*a53);
  a61=cos(a0);
  a77=(a61*a12);
  a77=(a17*a77);
  a78=(a19*a77);
  a79=(a33*a52);
  a78=(a78+a79);
  a79=(a19*a78);
  a80=(a34*a52);
  a79=(a79+a80);
  a80=cos(a0);
  a81=(a80*a12);
  a82=(a37*a81);
  a83=sin(a0);
  a84=(a83*a12);
  a84=(a36*a84);
  a85=(a38*a84);
  a82=(a82-a85);
  a79=(a79+a82);
  a79=(a79/a5);
  a35=(a35/a5);
  a82=(a35*a58);
  a79=(a79-a82);
  a79=(a79/a5);
  a39=(a39/a5);
  a82=(a39*a58);
  a79=(a79-a82);
  a79=(a40*a79);
  a53=(a53+a79);
  a79=(a7*a53);
  a57=(a32*a57);
  a79=(a79-a57);
  a79=(a26*a79);
  a73=(a73+a79);
  a63=(a63-a73);
  a73=cos(a0);
  a79=(a73*a12);
  a79=(a43*a79);
  a53=(a8*a53);
  a60=(a32*a60);
  a53=(a53-a60);
  a53=(a6*a53);
  a53=(a42*a53);
  a79=(a79+a53);
  a63=(a63-a79);
  a79=sin(a0);
  a53=(a79*a12);
  a53=(a46*a53);
  a84=(a45*a84);
  a60=(a45/a5);
  a58=(a60*a58);
  a57=(a37*a58);
  a84=(a84+a57);
  a84=(a44*a84);
  a53=(a53+a84);
  a63=(a63-a53);
  a53=cos(a0);
  a84=(a53*a12);
  a84=(a48*a84);
  a81=(a45*a81);
  a57=(a38*a58);
  a81=(a81-a57);
  a81=(a36*a81);
  a81=(a47*a81);
  a84=(a84+a81);
  a63=(a63-a84);
  a84=(a50*a52);
  a81=(a45*a52);
  a57=(a19*a58);
  a81=(a81-a57);
  a57=(a19*a81);
  a84=(a84+a57);
  a84=(a17*a84);
  a84=(a49*a84);
  a0=sin(a0);
  a57=(a0*a12);
  a57=(a51*a57);
  a84=(a84-a57);
  a63=(a63+a84);
  a12=(a12*a63);
  a65=(a10*a65);
  a84=(a28*a62);
  a65=(a65-a84);
  a72=(a20*a72);
  a54=(a27*a54);
  a72=(a72+a54);
  a65=(a65+a72);
  a78=(a45*a78);
  a72=(a34*a58);
  a78=(a78-a72);
  a65=(a65+a78);
  a77=(a50*a77);
  a81=(a33*a81);
  a77=(a77+a81);
  a65=(a65+a77);
  a52=(a52*a65);
  a12=(a12+a52);
  if (res[1]!=0) res[1][0]=a12;
  a12=arg[1] ? arg[1][6] : 0;
  a52=(a12*a63);
  a77=arg[1] ? arg[1][7] : 0;
  a81=(a77*a65);
  a52=(a52+a81);
  if (res[1]!=0) res[1][1]=a52;
  a52=arg[1] ? arg[1][10] : 0;
  a81=(a52*a63);
  a78=arg[1] ? arg[1][11] : 0;
  a72=(a78*a65);
  a81=(a81+a72);
  if (res[1]!=0) res[1][2]=a81;
  a81=arg[1] ? arg[1][14] : 0;
  a72=(a81*a63);
  a54=arg[1] ? arg[1][15] : 0;
  a84=(a54*a65);
  a72=(a72+a84);
  if (res[1]!=0) res[1][3]=a72;
  a72=arg[2] ? arg[2][2] : 0;
  a63=(a72*a63);
  a84=arg[2] ? arg[2][3] : 0;
  a65=(a84*a65);
  a63=(a63+a65);
  a75=(a10*a75);
  a62=(a30*a62);
  a75=(a75+a62);
  a75=(a75+a58);
  a63=(a63-a75);
  if (res[1]!=0) res[1][4]=a63;
  a63=(a20*a77);
  a75=(a10*a77);
  a58=(a56*a12);
  a58=(a6*a58);
  a62=(a8*a58);
  a65=(a59*a12);
  a57=(a7*a65);
  a62=(a62+a57);
  a57=(a4*a62);
  a82=(a55*a57);
  a85=(a19*a82);
  a75=(a75-a85);
  a85=(a19*a75);
  a63=(a63+a85);
  a85=(a18*a63);
  a86=(a64*a12);
  a86=(a17*a86);
  a87=(a21*a86);
  a85=(a85-a87);
  a85=(a16*a85);
  a87=(a66*a12);
  a87=(a22*a87);
  a85=(a85-a87);
  a87=(a67*a12);
  a87=(a11*a87);
  a88=(a2*a82);
  a88=(a1*a88);
  a87=(a87+a88);
  a88=(a69*a12);
  a88=(a15*a88);
  a89=(a14*a82);
  a89=(a13*a89);
  a88=(a88-a89);
  a87=(a87+a88);
  a85=(a85-a87);
  a87=(a68*a12);
  a87=(a25*a87);
  a88=(a71*a12);
  a89=(a21*a88);
  a63=(a24*a63);
  a89=(a89+a63);
  a89=(a17*a89);
  a89=(a23*a89);
  a87=(a87+a89);
  a85=(a85-a87);
  a87=(a70*a12);
  a87=(a41*a87);
  a88=(a18*a88);
  a86=(a24*a86);
  a88=(a88-a86);
  a86=(a19*a88);
  a89=(a27*a77);
  a86=(a86+a89);
  a89=(a19*a86);
  a63=(a28*a77);
  a89=(a89+a63);
  a63=(a74*a12);
  a90=(a14*a63);
  a89=(a89-a90);
  a90=(a76*a12);
  a90=(a2*a90);
  a89=(a89+a90);
  a89=(a89/a9);
  a90=(a29*a57);
  a89=(a89-a90);
  a89=(a89/a9);
  a57=(a31*a57);
  a89=(a89-a57);
  a89=(a3*a89);
  a89=(a4*a89);
  a57=(a61*a12);
  a57=(a17*a57);
  a90=(a19*a57);
  a91=(a33*a77);
  a90=(a90+a91);
  a91=(a19*a90);
  a92=(a34*a77);
  a91=(a91+a92);
  a92=(a80*a12);
  a93=(a37*a92);
  a94=(a83*a12);
  a94=(a36*a94);
  a95=(a38*a94);
  a93=(a93-a95);
  a91=(a91+a93);
  a91=(a91/a5);
  a93=(a35*a62);
  a91=(a91-a93);
  a91=(a91/a5);
  a93=(a39*a62);
  a91=(a91-a93);
  a91=(a40*a91);
  a89=(a89+a91);
  a91=(a7*a89);
  a58=(a32*a58);
  a91=(a91-a58);
  a91=(a26*a91);
  a87=(a87+a91);
  a85=(a85-a87);
  a87=(a73*a12);
  a87=(a43*a87);
  a89=(a8*a89);
  a65=(a32*a65);
  a89=(a89-a65);
  a89=(a6*a89);
  a89=(a42*a89);
  a87=(a87+a89);
  a85=(a85-a87);
  a87=(a79*a12);
  a87=(a46*a87);
  a94=(a45*a94);
  a62=(a60*a62);
  a89=(a37*a62);
  a94=(a94+a89);
  a94=(a44*a94);
  a87=(a87+a94);
  a85=(a85-a87);
  a87=(a53*a12);
  a87=(a48*a87);
  a92=(a45*a92);
  a94=(a38*a62);
  a92=(a92-a94);
  a92=(a36*a92);
  a92=(a47*a92);
  a87=(a87+a92);
  a85=(a85-a87);
  a87=(a50*a77);
  a92=(a45*a77);
  a94=(a19*a62);
  a92=(a92-a94);
  a94=(a19*a92);
  a87=(a87+a94);
  a87=(a17*a87);
  a87=(a49*a87);
  a94=(a0*a12);
  a94=(a51*a94);
  a87=(a87-a94);
  a85=(a85+a87);
  a12=(a12*a85);
  a86=(a10*a86);
  a87=(a28*a82);
  a86=(a86-a87);
  a88=(a20*a88);
  a75=(a27*a75);
  a88=(a88+a75);
  a86=(a86+a88);
  a90=(a45*a90);
  a88=(a34*a62);
  a90=(a90-a88);
  a86=(a86+a90);
  a57=(a50*a57);
  a92=(a33*a92);
  a57=(a57+a92);
  a86=(a86+a57);
  a77=(a77*a86);
  a12=(a12+a77);
  if (res[1]!=0) res[1][5]=a12;
  a12=(a52*a85);
  a77=(a78*a86);
  a12=(a12+a77);
  if (res[1]!=0) res[1][6]=a12;
  a12=(a81*a85);
  a77=(a54*a86);
  a12=(a12+a77);
  if (res[1]!=0) res[1][7]=a12;
  a85=(a72*a85);
  a86=(a84*a86);
  a85=(a85+a86);
  a63=(a10*a63);
  a82=(a30*a82);
  a63=(a63+a82);
  a63=(a63+a62);
  a85=(a85-a63);
  if (res[1]!=0) res[1][8]=a85;
  a85=(a20*a78);
  a63=(a10*a78);
  a62=(a56*a52);
  a62=(a6*a62);
  a82=(a8*a62);
  a86=(a59*a52);
  a12=(a7*a86);
  a82=(a82+a12);
  a12=(a4*a82);
  a77=(a55*a12);
  a57=(a19*a77);
  a63=(a63-a57);
  a57=(a19*a63);
  a85=(a85+a57);
  a57=(a18*a85);
  a92=(a64*a52);
  a92=(a17*a92);
  a90=(a21*a92);
  a57=(a57-a90);
  a57=(a16*a57);
  a90=(a66*a52);
  a90=(a22*a90);
  a57=(a57-a90);
  a90=(a67*a52);
  a90=(a11*a90);
  a88=(a2*a77);
  a88=(a1*a88);
  a90=(a90+a88);
  a88=(a69*a52);
  a88=(a15*a88);
  a75=(a14*a77);
  a75=(a13*a75);
  a88=(a88-a75);
  a90=(a90+a88);
  a57=(a57-a90);
  a90=(a68*a52);
  a90=(a25*a90);
  a88=(a71*a52);
  a75=(a21*a88);
  a85=(a24*a85);
  a75=(a75+a85);
  a75=(a17*a75);
  a75=(a23*a75);
  a90=(a90+a75);
  a57=(a57-a90);
  a90=(a70*a52);
  a90=(a41*a90);
  a88=(a18*a88);
  a92=(a24*a92);
  a88=(a88-a92);
  a92=(a19*a88);
  a75=(a27*a78);
  a92=(a92+a75);
  a75=(a19*a92);
  a85=(a28*a78);
  a75=(a75+a85);
  a85=(a74*a52);
  a87=(a14*a85);
  a75=(a75-a87);
  a87=(a76*a52);
  a87=(a2*a87);
  a75=(a75+a87);
  a75=(a75/a9);
  a87=(a29*a12);
  a75=(a75-a87);
  a75=(a75/a9);
  a12=(a31*a12);
  a75=(a75-a12);
  a75=(a3*a75);
  a75=(a4*a75);
  a12=(a61*a52);
  a12=(a17*a12);
  a87=(a19*a12);
  a94=(a33*a78);
  a87=(a87+a94);
  a94=(a19*a87);
  a89=(a34*a78);
  a94=(a94+a89);
  a89=(a80*a52);
  a65=(a37*a89);
  a91=(a83*a52);
  a91=(a36*a91);
  a58=(a38*a91);
  a65=(a65-a58);
  a94=(a94+a65);
  a94=(a94/a5);
  a65=(a35*a82);
  a94=(a94-a65);
  a94=(a94/a5);
  a65=(a39*a82);
  a94=(a94-a65);
  a94=(a40*a94);
  a75=(a75+a94);
  a94=(a7*a75);
  a62=(a32*a62);
  a94=(a94-a62);
  a94=(a26*a94);
  a90=(a90+a94);
  a57=(a57-a90);
  a90=(a73*a52);
  a90=(a43*a90);
  a75=(a8*a75);
  a86=(a32*a86);
  a75=(a75-a86);
  a75=(a6*a75);
  a75=(a42*a75);
  a90=(a90+a75);
  a57=(a57-a90);
  a90=(a79*a52);
  a90=(a46*a90);
  a91=(a45*a91);
  a82=(a60*a82);
  a75=(a37*a82);
  a91=(a91+a75);
  a91=(a44*a91);
  a90=(a90+a91);
  a57=(a57-a90);
  a90=(a53*a52);
  a90=(a48*a90);
  a89=(a45*a89);
  a91=(a38*a82);
  a89=(a89-a91);
  a89=(a36*a89);
  a89=(a47*a89);
  a90=(a90+a89);
  a57=(a57-a90);
  a90=(a50*a78);
  a89=(a45*a78);
  a91=(a19*a82);
  a89=(a89-a91);
  a91=(a19*a89);
  a90=(a90+a91);
  a90=(a17*a90);
  a90=(a49*a90);
  a91=(a0*a52);
  a91=(a51*a91);
  a90=(a90-a91);
  a57=(a57+a90);
  a52=(a52*a57);
  a92=(a10*a92);
  a90=(a28*a77);
  a92=(a92-a90);
  a88=(a20*a88);
  a63=(a27*a63);
  a88=(a88+a63);
  a92=(a92+a88);
  a87=(a45*a87);
  a88=(a34*a82);
  a87=(a87-a88);
  a92=(a92+a87);
  a12=(a50*a12);
  a89=(a33*a89);
  a12=(a12+a89);
  a92=(a92+a12);
  a78=(a78*a92);
  a52=(a52+a78);
  if (res[1]!=0) res[1][9]=a52;
  a52=(a81*a57);
  a78=(a54*a92);
  a52=(a52+a78);
  if (res[1]!=0) res[1][10]=a52;
  a57=(a72*a57);
  a92=(a84*a92);
  a57=(a57+a92);
  a85=(a10*a85);
  a77=(a30*a77);
  a85=(a85+a77);
  a85=(a85+a82);
  a57=(a57-a85);
  if (res[1]!=0) res[1][11]=a57;
  a57=(a20*a54);
  a85=(a10*a54);
  a82=(a56*a81);
  a82=(a6*a82);
  a77=(a8*a82);
  a92=(a59*a81);
  a52=(a7*a92);
  a77=(a77+a52);
  a52=(a4*a77);
  a78=(a55*a52);
  a12=(a19*a78);
  a85=(a85-a12);
  a12=(a19*a85);
  a57=(a57+a12);
  a12=(a18*a57);
  a89=(a64*a81);
  a89=(a17*a89);
  a87=(a21*a89);
  a12=(a12-a87);
  a12=(a16*a12);
  a87=(a66*a81);
  a87=(a22*a87);
  a12=(a12-a87);
  a87=(a67*a81);
  a87=(a11*a87);
  a88=(a2*a78);
  a88=(a1*a88);
  a87=(a87+a88);
  a88=(a69*a81);
  a88=(a15*a88);
  a63=(a14*a78);
  a63=(a13*a63);
  a88=(a88-a63);
  a87=(a87+a88);
  a12=(a12-a87);
  a87=(a68*a81);
  a87=(a25*a87);
  a88=(a71*a81);
  a63=(a21*a88);
  a57=(a24*a57);
  a63=(a63+a57);
  a63=(a17*a63);
  a63=(a23*a63);
  a87=(a87+a63);
  a12=(a12-a87);
  a87=(a70*a81);
  a87=(a41*a87);
  a88=(a18*a88);
  a89=(a24*a89);
  a88=(a88-a89);
  a89=(a19*a88);
  a63=(a27*a54);
  a89=(a89+a63);
  a63=(a19*a89);
  a57=(a28*a54);
  a63=(a63+a57);
  a57=(a74*a81);
  a90=(a14*a57);
  a63=(a63-a90);
  a90=(a76*a81);
  a90=(a2*a90);
  a63=(a63+a90);
  a63=(a63/a9);
  a90=(a29*a52);
  a63=(a63-a90);
  a63=(a63/a9);
  a52=(a31*a52);
  a63=(a63-a52);
  a63=(a3*a63);
  a63=(a4*a63);
  a52=(a61*a81);
  a52=(a17*a52);
  a90=(a19*a52);
  a91=(a33*a54);
  a90=(a90+a91);
  a91=(a19*a90);
  a75=(a34*a54);
  a91=(a91+a75);
  a75=(a80*a81);
  a86=(a37*a75);
  a94=(a83*a81);
  a94=(a36*a94);
  a62=(a38*a94);
  a86=(a86-a62);
  a91=(a91+a86);
  a91=(a91/a5);
  a86=(a35*a77);
  a91=(a91-a86);
  a91=(a91/a5);
  a86=(a39*a77);
  a91=(a91-a86);
  a91=(a40*a91);
  a63=(a63+a91);
  a91=(a7*a63);
  a82=(a32*a82);
  a91=(a91-a82);
  a91=(a26*a91);
  a87=(a87+a91);
  a12=(a12-a87);
  a87=(a73*a81);
  a87=(a43*a87);
  a63=(a8*a63);
  a92=(a32*a92);
  a63=(a63-a92);
  a63=(a6*a63);
  a63=(a42*a63);
  a87=(a87+a63);
  a12=(a12-a87);
  a87=(a79*a81);
  a87=(a46*a87);
  a94=(a45*a94);
  a77=(a60*a77);
  a63=(a37*a77);
  a94=(a94+a63);
  a94=(a44*a94);
  a87=(a87+a94);
  a12=(a12-a87);
  a87=(a53*a81);
  a87=(a48*a87);
  a75=(a45*a75);
  a94=(a38*a77);
  a75=(a75-a94);
  a75=(a36*a75);
  a75=(a47*a75);
  a87=(a87+a75);
  a12=(a12-a87);
  a87=(a50*a54);
  a75=(a45*a54);
  a94=(a19*a77);
  a75=(a75-a94);
  a94=(a19*a75);
  a87=(a87+a94);
  a87=(a17*a87);
  a87=(a49*a87);
  a94=(a0*a81);
  a94=(a51*a94);
  a87=(a87-a94);
  a12=(a12+a87);
  a81=(a81*a12);
  a89=(a10*a89);
  a87=(a28*a78);
  a89=(a89-a87);
  a88=(a20*a88);
  a85=(a27*a85);
  a88=(a88+a85);
  a89=(a89+a88);
  a90=(a45*a90);
  a88=(a34*a77);
  a90=(a90-a88);
  a89=(a89+a90);
  a52=(a50*a52);
  a75=(a33*a75);
  a52=(a52+a75);
  a89=(a89+a52);
  a54=(a54*a89);
  a81=(a81+a54);
  if (res[1]!=0) res[1][12]=a81;
  a12=(a72*a12);
  a89=(a84*a89);
  a12=(a12+a89);
  a57=(a10*a57);
  a78=(a30*a78);
  a57=(a57+a78);
  a57=(a57+a77);
  a12=(a12-a57);
  if (res[1]!=0) res[1][13]=a12;
  a12=(a20*a84);
  a57=(a10*a84);
  a56=(a56*a72);
  a56=(a6*a56);
  a77=(a8*a56);
  a59=(a59*a72);
  a78=(a7*a59);
  a77=(a77+a78);
  a78=(a4*a77);
  a55=(a55*a78);
  a89=(a19*a55);
  a57=(a57-a89);
  a89=(a19*a57);
  a12=(a12+a89);
  a89=(a18*a12);
  a64=(a64*a72);
  a64=(a17*a64);
  a81=(a21*a64);
  a89=(a89-a81);
  a16=(a16*a89);
  a66=(a66*a72);
  a22=(a22*a66);
  a16=(a16-a22);
  a67=(a67*a72);
  a11=(a11*a67);
  a67=(a2*a55);
  a1=(a1*a67);
  a11=(a11+a1);
  a69=(a69*a72);
  a15=(a15*a69);
  a69=(a14*a55);
  a69=(a10-a69);
  a13=(a13*a69);
  a15=(a15+a13);
  a11=(a11+a15);
  a16=(a16-a11);
  a68=(a68*a72);
  a25=(a25*a68);
  a71=(a71*a72);
  a21=(a21*a71);
  a12=(a24*a12);
  a21=(a21+a12);
  a21=(a17*a21);
  a23=(a23*a21);
  a25=(a25+a23);
  a16=(a16-a25);
  a70=(a70*a72);
  a41=(a41*a70);
  a18=(a18*a71);
  a24=(a24*a64);
  a18=(a18-a24);
  a24=(a19*a18);
  a64=(a27*a84);
  a24=(a24+a64);
  a64=(a19*a24);
  a71=(a28*a84);
  a64=(a64+a71);
  a74=(a74*a72);
  a14=(a14*a74);
  a14=(a30-a14);
  a64=(a64+a14);
  a76=(a76*a72);
  a2=(a2*a76);
  a64=(a64+a2);
  a64=(a64/a9);
  a29=(a29*a78);
  a64=(a64-a29);
  a64=(a64/a9);
  a31=(a31*a78);
  a64=(a64-a31);
  a3=(a3*a64);
  a4=(a4*a3);
  a61=(a61*a72);
  a61=(a17*a61);
  a3=(a19*a61);
  a64=(a33*a84);
  a3=(a3+a64);
  a64=(a19*a3);
  a31=(a34*a84);
  a64=(a64+a31);
  a80=(a80*a72);
  a31=(a37*a80);
  a83=(a83*a72);
  a83=(a36*a83);
  a78=(a38*a83);
  a31=(a31-a78);
  a64=(a64+a31);
  a31=1.;
  a64=(a64+a31);
  a64=(a64/a5);
  a35=(a35*a77);
  a64=(a64-a35);
  a64=(a64/a5);
  a39=(a39*a77);
  a64=(a64-a39);
  a40=(a40*a64);
  a4=(a4+a40);
  a7=(a7*a4);
  a56=(a32*a56);
  a7=(a7-a56);
  a26=(a26*a7);
  a41=(a41+a26);
  a16=(a16-a41);
  a73=(a73*a72);
  a43=(a43*a73);
  a8=(a8*a4);
  a32=(a32*a59);
  a8=(a8-a32);
  a6=(a6*a8);
  a42=(a42*a6);
  a43=(a43+a42);
  a16=(a16-a43);
  a79=(a79*a72);
  a46=(a46*a79);
  a83=(a45*a83);
  a60=(a60*a77);
  a37=(a37*a60);
  a83=(a83+a37);
  a44=(a44*a83);
  a46=(a46+a44);
  a16=(a16-a46);
  a53=(a53*a72);
  a48=(a48*a53);
  a80=(a45*a80);
  a38=(a38*a60);
  a80=(a80-a38);
  a36=(a36*a80);
  a47=(a47*a36);
  a48=(a48+a47);
  a16=(a16-a48);
  a48=(a50*a84);
  a47=(a45*a84);
  a36=(a19*a60);
  a47=(a47-a36);
  a19=(a19*a47);
  a48=(a48+a19);
  a17=(a17*a48);
  a49=(a49*a17);
  a0=(a0*a72);
  a51=(a51*a0);
  a49=(a49-a51);
  a16=(a16+a49);
  a72=(a72*a16);
  a24=(a10*a24);
  a28=(a28*a55);
  a24=(a24-a28);
  a20=(a20*a18);
  a27=(a27*a57);
  a20=(a20+a27);
  a24=(a24+a20);
  a45=(a45*a3);
  a34=(a34*a60);
  a45=(a45-a34);
  a24=(a24+a45);
  a50=(a50*a61);
  a33=(a33*a47);
  a50=(a50+a33);
  a24=(a24+a50);
  a84=(a84*a24);
  a72=(a72+a84);
  a10=(a10*a74);
  a30=(a30*a55);
  a10=(a10+a30);
  a10=(a10+a60);
  a72=(a72-a10);
  if (res[1]!=0) res[1][14]=a72;
  return 0;
}

CASADI_SYMBOL_EXPORT int pendulum_ode_expl_ode_hess(const casadi_real** arg, casadi_real** res, casadi_int* iw, casadi_real* w, void* mem){
  return casadi_f0(arg, res, iw, w, mem);
}

CASADI_SYMBOL_EXPORT void pendulum_ode_expl_ode_hess_incref(void) {
}

CASADI_SYMBOL_EXPORT void pendulum_ode_expl_ode_hess_decref(void) {
}

CASADI_SYMBOL_EXPORT casadi_int pendulum_ode_expl_ode_hess_n_in(void) { return 5;}

CASADI_SYMBOL_EXPORT casadi_int pendulum_ode_expl_ode_hess_n_out(void) { return 2;}

CASADI_SYMBOL_EXPORT const char* pendulum_ode_expl_ode_hess_name_in(casadi_int i){
  switch (i) {
    case 0: return "i0";
    case 1: return "i1";
    case 2: return "i2";
    case 3: return "i3";
    case 4: return "i4";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const char* pendulum_ode_expl_ode_hess_name_out(casadi_int i){
  switch (i) {
    case 0: return "o0";
    case 1: return "o1";
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* pendulum_ode_expl_ode_hess_sparsity_in(casadi_int i) {
  switch (i) {
    case 0: return casadi_s0;
    case 1: return casadi_s1;
    case 2: return casadi_s0;
    case 3: return casadi_s0;
    case 4: return casadi_s2;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT const casadi_int* pendulum_ode_expl_ode_hess_sparsity_out(casadi_int i) {
  switch (i) {
    case 0: return casadi_s3;
    case 1: return casadi_s4;
    default: return 0;
  }
}

CASADI_SYMBOL_EXPORT int pendulum_ode_expl_ode_hess_work(casadi_int *sz_arg, casadi_int* sz_res, casadi_int *sz_iw, casadi_int *sz_w) {
  if (sz_arg) *sz_arg = 5;
  if (sz_res) *sz_res = 2;
  if (sz_iw) *sz_iw = 0;
  if (sz_w) *sz_w = 0;
  return 0;
}


#ifdef __cplusplus
} /* extern "C" */
#endif
