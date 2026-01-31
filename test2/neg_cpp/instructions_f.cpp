void gen() {
  bool err;
  TEST(fmopa(za4.s,p7/T_m,p7/T_m,z8.h,z8.h));
  TEST(fmopa(za3.s,p8/T_m,p7/T_m,z8.h,z8.h));
  TEST(fmopa(za3.s,p7/T_m,p8/T_m,z8.h,z8.h));
  TEST(fmops(za4.s,p7/T_m,p7/T_m,z8.h,z8.h));
  TEST(fmops(za3.s,p8/T_m,p7/T_m,z8.h,z8.h));
  TEST(fmops(za3.s,p7/T_m,p8/T_m,z8.h,z8.h));
}