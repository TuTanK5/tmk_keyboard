#ifndef ACTIONMAP_COMMON_H
#define ACTIONMAP_COMMON_H

#define ACTIONMAP( \
    K00, K01, K02, K03, K04,      \
    K10, K11, K12, K13, K14,      \
    K20, K21, K22, K23, K24,      \
    K30, K31, K32, K33, K34, K35, \
\
         K41, K42, K43, K44, K45, \
         K51, K52, K53, K54, K55, \
         K61, K62, K63, K64, K65, \
    K70, K71, K72, K73, K74, K75  \
) { \
    { AC_##K00, AC_##K01, AC_##K02, AC_##K03, AC_##K04, AC_NO    }, \
    { AC_##K10, AC_##K11, AC_##K12, AC_##K13, AC_##K14, AC_NO    }, \
    { AC_##K20, AC_##K21, AC_##K22, AC_##K23, AC_##K24, AC_NO    }, \
    { AC_##K30, AC_##K31, AC_##K32, AC_##K33, AC_##K34, AC_##K35 }, \
\
    { AC_NO   , AC_##K41, AC_##K42, AC_##K43, AC_##K44, AC_##K45 }, \
    { AC_NO   , AC_##K51, AC_##K52, AC_##K53, AC_##K54, AC_##K55 }, \
    { AC_NO   , AC_##K61, AC_##K62, AC_##K63, AC_##K64, AC_##K65 }, \
    { AC_##K70, AC_##K71, AC_##K72, AC_##K73, AC_##K74, AC_##K75 } \
}

#endif
