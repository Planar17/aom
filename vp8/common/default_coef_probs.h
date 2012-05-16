/*
 *  Copyright (c) 2010 The WebM project authors. All Rights Reserved.
 *
 *  Use of this source code is governed by a BSD-style license
 *  that can be found in the LICENSE file in the root of the source
 *  tree. An additional intellectual property rights grant can be found
 *  in the file PATENTS.  All contributing project authors may
 *  be found in the AUTHORS file in the root of the source tree.
*/


/*Generated file, included by entropy.c*/


static const vp8_prob default_coef_probs [BLOCK_TYPES]
                                         [COEF_BANDS]
                                         [PREV_COEF_CONTEXTS]
                                         [ENTROPY_NODES] =
{
    { /* Block Type ( 0 ) */
        { /* Coeff Band ( 0 )*/
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 }
#endif
        },
        { /* Coeff Band ( 1 )*/
            { 253, 136, 254, 255, 228, 219, 128, 128, 128, 128, 128 },
            { 189, 129, 242, 255, 227, 213, 255, 219, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 106, 126, 227, 252, 214, 209, 255, 255, 128, 128, 128 },
            { 90, 116, 227, 252, 214, 209, 255, 255, 128, 128, 128 },
#else
            { 106, 126, 227, 252, 214, 209, 255, 255, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 2 )*/
            {   1,  98, 248, 255, 236, 226, 255, 255, 128, 128, 128 },
            { 181, 133, 238, 254, 221, 234, 255, 154, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  78, 134, 202, 247, 198, 180, 255, 219, 128, 128, 128 },
            {  64, 128, 202, 247, 198, 180, 255, 219, 128, 128, 128 },
#else
            {  78, 134, 202, 247, 198, 180, 255, 219, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 3 )*/
            {   1, 185, 249, 255, 243, 255, 128, 128, 128, 128, 128 },
            { 184, 150, 247, 255, 236, 224, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  77, 110, 216, 255, 236, 230, 128, 128, 128, 128, 128 },
            {  64, 100, 216, 255, 236, 230, 128, 128, 128, 128, 128 },
#else
            {  77, 110, 216, 255, 236, 230, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 4 )*/
            {   1, 101, 251, 255, 241, 255, 128, 128, 128, 128, 128 },
            { 170, 139, 241, 252, 236, 209, 255, 255, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  37, 116, 196, 243, 228, 255, 255, 255, 128, 128, 128 },
            {  28, 110, 196, 243, 228, 255, 255, 255, 128, 128, 128 },
#else
            {  37, 116, 196, 243, 228, 255, 255, 255, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 5 )*/
            {   1, 204, 254, 255, 245, 255, 128, 128, 128, 128, 128 },
            { 207, 160, 250, 255, 238, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 102, 103, 231, 255, 211, 171, 128, 128, 128, 128, 128 },
            { 90, 90, 231, 255, 211, 171, 128, 128, 128, 128, 128 },
#else
            { 102, 103, 231, 255, 211, 171, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 6 )*/
            {   1, 152, 252, 255, 240, 255, 128, 128, 128, 128, 128 },
            { 177, 135, 243, 255, 234, 225, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  80, 129, 211, 255, 194, 224, 128, 128, 128, 128, 128 },
            {  64, 120, 211, 255, 194, 224, 128, 128, 128, 128, 128 },
#else
            {  80, 129, 211, 255, 194, 224, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 7 )*/
            {   1,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 246,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 255, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 255, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            { 255, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#endif
        }
    },
    { /* Block Type ( 1 ) */
        { /* Coeff Band ( 0 )*/
            { 198,  35, 237, 223, 193, 187, 162, 160, 145, 155,  62 },
            { 131,  45, 198, 221, 172, 176, 220, 157, 252, 221,   1 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  68,  47, 146, 208, 149, 167, 221, 162, 255, 223, 128 },
            {  48,  32, 146, 208, 149, 167, 221, 162, 255, 223, 128 },
#else
            {  68,  47, 146, 208, 149, 167, 221, 162, 255, 223, 128 },
#endif
        },
        { /* Coeff Band ( 1 )*/
            {   1, 149, 241, 255, 221, 224, 255, 255, 128, 128, 128 },
            { 184, 141, 234, 253, 222, 220, 255, 199, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  81,  99, 181, 242, 176, 190, 249, 202, 255, 255, 128 },
            {  66,  90, 181, 242, 176, 190, 249, 202, 255, 255, 128 },
#else
            {  81,  99, 181, 242, 176, 190, 249, 202, 255, 255, 128 },
#endif
        },
        { /* Coeff Band ( 2 )*/
            {   1, 129, 232, 253, 214, 197, 242, 196, 255, 255, 128 },
            {  99, 121, 210, 250, 201, 198, 255, 202, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  23,  91, 163, 242, 170, 187, 247, 210, 255, 255, 128 },
            {  18,  80, 163, 242, 170, 187, 247, 210, 255, 255, 128 },
#else
            {  23,  91, 163, 242, 170, 187, 247, 210, 255, 255, 128 },
#endif
        },
        { /* Coeff Band ( 3 )*/
            {   1, 200, 246, 255, 234, 255, 128, 128, 128, 128, 128 },
            { 109, 178, 241, 255, 231, 245, 255, 255, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  44, 130, 201, 253, 205, 192, 255, 255, 128, 128, 128 },
            {  36, 120, 201, 253, 205, 192, 255, 255, 128, 128, 128 },
#else
            {  44, 130, 201, 253, 205, 192, 255, 255, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 4 )*/
            {   1, 132, 239, 251, 219, 209, 255, 165, 128, 128, 128 },
            {  94, 136, 225, 251, 218, 190, 255, 255, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  22, 100, 174, 245, 186, 161, 255, 199, 128, 128, 128 },
            {  18, 90, 174, 245, 186, 161, 255, 199, 128, 128, 128 },
#else
            {  22, 100, 174, 245, 186, 161, 255, 199, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 5 )*/
            {   1, 182, 249, 255, 232, 235, 128, 128, 128, 128, 128 },
            { 124, 143, 241, 255, 227, 234, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  35,  77, 181, 251, 193, 211, 255, 205, 128, 128, 128 },
            {  28,  70, 181, 251, 193, 211, 255, 205, 128, 128, 128 },
#else
            {  35,  77, 181, 251, 193, 211, 255, 205, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 6 )*/
            {   1, 157, 247, 255, 236, 231, 255, 255, 128, 128, 128 },
            { 121, 141, 235, 255, 225, 227, 255, 255, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  45,  99, 188, 251, 195, 217, 255, 224, 128, 128, 128 },
            {  40,  90, 188, 251, 195, 217, 255, 224, 128, 128, 128 },
#else
            {  45,  99, 188, 251, 195, 217, 255, 224, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 7 )*/
            {   1,   1, 251, 255, 213, 255, 128, 128, 128, 128, 128 },
            { 203,   1, 248, 255, 255, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 137,   1, 177, 255, 224, 255, 128, 128, 128, 128, 128 },
            { 137,   1, 177, 255, 224, 255, 128, 128, 128, 128, 128 },
#else
            { 137,   1, 177, 255, 224, 255, 128, 128, 128, 128, 128 },
#endif
        }
    },
    { /* Block Type ( 2 ) */
        { /* Coeff Band ( 0 )*/
            { 253,   9, 248, 251, 207, 208, 255, 192, 128, 128, 128 },
            { 175,  13, 224, 243, 193, 185, 249, 198, 255, 255, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  73,  17, 171, 221, 161, 179, 236, 167, 255, 234, 128 },
            {  64,  17, 171, 221, 161, 179, 236, 167, 255, 234, 128 },
#else
            {  73,  17, 171, 221, 161, 179, 236, 167, 255, 234, 128 },
#endif
        },
        { /* Coeff Band ( 1 )*/
            {   1,  95, 247, 253, 212, 183, 255, 255, 128, 128, 128 },
            { 239,  90, 244, 250, 211, 209, 255, 255, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 155,  77, 195, 248, 188, 195, 255, 255, 128, 128, 128 },
            { 140,  70, 195, 248, 188, 195, 255, 255, 128, 128, 128 },
#else
            { 155,  77, 195, 248, 188, 195, 255, 255, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 2 )*/
            {   1,  24, 239, 251, 218, 219, 255, 205, 128, 128, 128 },
            { 201,  51, 219, 255, 196, 186, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  69,  46, 190, 239, 201, 218, 255, 228, 128, 128, 128 },
            {  60,  40, 190, 239, 201, 218, 255, 228, 128, 128, 128 },
#else
            {  69,  46, 190, 239, 201, 218, 255, 228, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 3 )*/
            {   1, 191, 251, 255, 255, 128, 128, 128, 128, 128, 128 },
            { 223, 165, 249, 255, 213, 255, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 141, 124, 248, 255, 255, 128, 128, 128, 128, 128, 128 },
            { 132, 118, 248, 255, 255, 128, 128, 128, 128, 128, 128 },
#else
            { 141, 124, 248, 255, 255, 128, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 4 )*/
            {   1,  16, 248, 255, 255, 128, 128, 128, 128, 128, 128 },
            { 190,  36, 230, 255, 236, 255, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 149,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 149,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            { 149,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 5 )*/
            {   1, 226, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 247, 192, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 240, 128, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 240, 128, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            { 240, 128, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 6 )*/
            {   1, 134, 252, 255, 255, 128, 128, 128, 128, 128, 128 },
            { 213,  62, 250, 255, 255, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  55,  93, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            {  48,  85, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            {  55,  93, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 7 )*/
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128 },
#endif
        }
    },
    { /* Block Type ( 3 ) */
        { /* Coeff Band ( 0 )*/
            { 202,  24, 213, 235, 186, 191, 220, 160, 240, 175, 255 },
            { 126,  38, 182, 232, 169, 184, 228, 174, 255, 187, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  63,  48, 138, 219, 151, 178, 240, 170, 255, 216, 128 },
            {  54,  40, 138, 219, 151, 178, 240, 170, 255, 216, 128 },
#else
            {  61,  46, 138, 219, 151, 178, 240, 170, 255, 216, 128 },
#endif
        },
        { /* Coeff Band ( 1 )*/
            {   1, 112, 230, 250, 199, 191, 247, 159, 255, 255, 128 },
            { 166, 109, 228, 252, 211, 215, 255, 174, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  44,  84, 162, 232, 172, 180, 245, 178, 255, 255, 128 },
            {  32,  70, 162, 232, 172, 180, 245, 178, 255, 255, 128 },
#else
            {  39,  77, 162, 232, 172, 180, 245, 178, 255, 255, 128 },
#endif
        },
        { /* Coeff Band ( 2 )*/
            {   1,  52, 220, 246, 198, 199, 249, 220, 255, 255, 128 },
            { 124,  74, 191, 243, 183, 193, 250, 221, 255, 255, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  24,  71, 130, 219, 154, 170, 243, 182, 255, 255, 128 },
            {  24,  71, 130, 219, 154, 170, 243, 182, 255, 255, 128 },
#else
            {  24,  71, 130, 219, 154, 170, 243, 182, 255, 255, 128 },
#endif
        },
        { /* Coeff Band ( 3 )*/
            {   1, 182, 225, 249, 219, 240, 255, 224, 128, 128, 128 },
            { 149, 150, 226, 252, 216, 205, 255, 171, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  28, 108, 170, 242, 183, 194, 254, 223, 255, 255, 128 },
            {  26, 104, 170, 242, 183, 194, 254, 223, 255, 255, 128 },
#else
            {  28, 108, 170, 242, 183, 194, 254, 223, 255, 255, 128 },
#endif
        },
        { /* Coeff Band ( 4 )*/
            {   1,  81, 230, 252, 204, 203, 255, 192, 128, 128, 128 },
            { 123, 102, 209, 247, 188, 196, 255, 233, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  20,  95, 153, 243, 164, 173, 255, 203, 128, 128, 128 },
            {  20,  95, 153, 243, 164, 173, 255, 203, 128, 128, 128 },
#else
            {  20,  95, 153, 243, 164, 173, 255, 203, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 5 )*/
            {   1, 222, 248, 255, 216, 213, 128, 128, 128, 128, 128 },
            { 168, 175, 246, 252, 235, 205, 255, 255, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  47, 116, 215, 255, 211, 212, 255, 255, 128, 128, 128 },
            {  47, 116, 215, 255, 211, 212, 255, 255, 128, 128, 128 },
#else
            {  47, 116, 215, 255, 211, 212, 255, 255, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 6 )*/
            {   1, 121, 236, 253, 212, 214, 255, 255, 128, 128, 128 },
            { 141,  84, 213, 252, 201, 202, 255, 219, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            {  42,  80, 160, 240, 162, 185, 255, 205, 128, 128, 128 },
            {  42,  80, 160, 240, 162, 185, 255, 205, 128, 128, 128 },
#else
            {  42,  80, 160, 240, 162, 185, 255, 205, 128, 128, 128 },
#endif
        },
        { /* Coeff Band ( 7 )*/
            {   1,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 244,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#if CONFIG_EXPANDED_COEF_CONTEXT
            { 238,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
            { 238,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#else
            { 238,   1, 255, 128, 128, 128, 128, 128, 128, 128, 128 },
#endif
        }
    }
};

static const vp8_prob
vp8_default_coef_probs_8x8[BLOCK_TYPES_8X8]
                          [COEF_BANDS]
                          [PREV_COEF_CONTEXTS]
                          [ENTROPY_NODES] =
{
  { /* block Type 0 */
    { /* Coeff Band 0 */
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
    },
    { /* Coeff Band 1 */
      { 60, 140, 195, 255, 212, 214, 128, 128, 128, 128, 128},
      { 75, 221, 231, 255, 203, 255, 128, 128, 128, 128, 128},
      { 9, 212, 196, 251, 197, 207, 255, 185, 128, 128, 128}
    },
    { /* Coeff Band 2 */
      { 1, 227, 226, 255, 215, 215, 128, 128, 128, 128, 128},
      { 5, 163, 209, 255, 212, 212, 255, 255, 128, 128, 128},
      { 1, 133, 203, 255, 210, 220, 255, 255, 128, 128, 128}
    },
    { /* Coeff Band 3 */
      { 1, 226, 225, 255, 228, 236, 128, 128, 128, 128, 128},
      { 6, 163, 208, 255, 224, 234, 255, 255, 128, 128, 128},
      { 1, 122, 196, 253, 212, 248, 255, 255, 128, 128, 128}
    },
    { /* Coeff Band 4 */
      { 1, 222, 197, 254, 193, 216, 255, 236, 128, 128, 128},
      { 7, 140, 163, 251, 195, 211, 255, 238, 128, 128, 128},
      { 1, 91, 152, 249, 181, 197, 255, 239, 128, 128, 128}
    },
    { /* Coeff Band 5 */
      { 1, 226, 218, 255, 216, 241, 255, 255, 128, 128, 128},
      { 6, 154, 191, 255, 218, 240, 255, 255, 128, 128, 128},
      { 1, 111, 184, 255, 210, 225, 255, 255, 128, 128, 128}
    },
    { /* Coeff Band 6 */
      { 1, 221, 217, 255, 208, 217, 255, 232, 128, 128, 128},
      { 11, 155, 189, 254, 203, 211, 255, 249, 128, 128, 128},
      { 1, 110, 171, 252, 191, 204, 255, 236, 128, 128, 128}
    },
    { /* Coeff Band 7 */
      { 1, 207, 235, 255, 232, 240, 128, 128, 128, 128, 128},
      { 58, 161, 216, 255, 229, 235, 255, 255, 128, 128, 128},
      { 8, 133, 204, 255, 219, 231, 255, 255, 128, 128, 128}
    }
  },
  { /* block Type 1 */
    { /* Coeff Band 0 */
      { 134, 152, 233, 224, 234, 52, 255, 166, 128, 128, 128},
      { 97, 132, 185, 234, 186, 189, 197, 171, 255, 212, 128},
      { 84, 110, 185, 237, 182, 182, 145, 145, 255, 255, 128}
    },
    { /* Coeff Band 1 */
      { 1, 124, 213, 247, 192, 212, 255, 255, 128, 128, 128},
      { 88, 111, 178, 254, 189, 211, 255, 255, 128, 128, 128},
      { 12, 59, 129, 236, 150, 179, 239, 195, 255, 255, 128}
    },
    { /* Coeff Band 2 */
      { 1, 102, 225, 255, 210, 240, 128, 128, 128, 128, 128},
      { 110, 78, 195, 254, 200, 191, 255, 255, 128, 128, 128},
      { 37, 63, 177, 255, 194, 195, 128, 128, 128, 128, 128}
    },
    { /* Coeff Band 3 */
      { 1, 1, 229, 255, 202, 224, 128, 128, 128, 128, 128},
      { 150, 1, 192, 255, 206, 226, 128, 128, 128, 128, 128},
      { 75, 1, 138, 255, 172, 228, 128, 128, 128, 128, 128}
    },
    { /* Coeff Band 4 */
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
    },
    { /* Coeff Band 5 */
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
    },
    { /* Coeff Band 6 */
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
    },
    { /* Coeff Band 7 */
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128},
      { 128, 128, 128, 128, 128, 128, 128, 128, 128, 128, 128}
    }
  },
  { /* block Type 2 */
    { /* Coeff Band 0 */
      { 11, 181, 226, 199, 183, 255, 255, 255, 128, 128, 128},
      { 2, 147, 185, 248, 163, 180, 255, 236, 128, 128, 128},
      { 1, 123, 157, 238, 154, 176, 255, 226, 255, 255, 128}
    },
    { /* Coeff Band 1 */
      { 1, 150, 191, 246, 174, 188, 255, 235, 128, 128, 128},
      { 1, 125, 166, 245, 165, 185, 255, 234, 128, 128, 128},
      { 1, 79, 125, 240, 148, 179, 255, 234, 255, 255, 128}
    },
    { /* Coeff Band 2 */
      { 1, 146, 184, 242, 167, 183, 255, 230, 255, 255, 128},
      { 1, 119, 160, 239, 156, 178, 255, 231, 255, 255, 128},
      { 1, 75, 115, 234, 142, 173, 255, 225, 255, 255, 128}
    },
    { /* Coeff Band 3 */
      { 1, 150, 188, 244, 169, 183, 255, 233, 255, 255, 128},
      { 1, 123, 162, 243, 161, 180, 255, 233, 128, 128, 128},
      { 1, 76, 120, 238, 148, 178, 255, 230, 255, 255, 128}
    },
    { /* Coeff Band 4 */
      { 1, 163, 202, 252, 188, 204, 255, 248, 128, 128, 128},
      { 1, 136, 180, 251, 181, 201, 255, 246, 128, 128, 128},
      { 1, 92, 146, 249, 170, 197, 255, 245, 128, 128, 128}
    },
    { /* Coeff Band 5 */
      { 1, 156, 195, 249, 179, 193, 255, 241, 255, 255, 128},
      { 1, 128, 169, 248, 171, 192, 255, 242, 255, 255, 128},
      { 1, 84, 132, 245, 158, 187, 255, 240, 255, 255, 128}
    },
    { /* Coeff Band 6 */
      { 1, 36, 71, 251, 192, 201, 255, 243, 255, 255, 128},
      { 1, 49, 185, 250, 184, 199, 255, 242, 128, 128, 128},
      { 1, 95, 147, 247, 168, 190, 255, 239, 255, 255, 128}
    },
    { /* Coeff Band 7 */
      { 1, 19, 98, 255, 218, 222, 255, 255, 128, 128, 128},
      { 36, 50, 210, 255, 212, 221, 255, 255, 128, 128, 128},
      { 6, 117, 180, 254, 199, 216, 255, 251, 128, 128, 128}
    }
  }
};
