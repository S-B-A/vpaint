// Copyright (C) 2012-2019 The VPaint Developers.
// See the COPYRIGHT file at the top-level directory of this distribution
// and at https://github.com/dalboris/vpaint/blob/master/COPYRIGHT
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "Color.h"

Color lerp(const Color & c0, const Color & c1, double u)
{
    // Get c0 HSL
    double h0 = c0.hueF();
    double s0 = c0.saturationF();
    double l0 = c0.lightnessF();
    double a0 = c0.alphaF();

    // Get c1 HSL
    double h1 = c1.hueF();
    double s1 = c1.saturationF();
    double l1 = c1.lightnessF();
    double a1 = c1.alphaF();

    // Compute lerp
    Color res;
    res.setHslF( h0+u*(h1-h0) , s0+u*(s1-s0) , l0+u*(l1-l0) , a0+u*(a1-a0) );

    // Return
    return res;
}
