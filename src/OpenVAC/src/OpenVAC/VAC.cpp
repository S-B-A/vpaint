// Copyright (C) 2012-2016 The VPaint Developers.
// See the COPYRIGHT file at the top-level directory of this distribution
// and at https://github.com/dalboris/vpaint/blob/master/COPYRIGHT
//
// This file is part of VPaint, a vector graphics editor. It is subject to the
// license terms and conditions in the LICENSE.MIT file found in the top-level
// directory of this distribution and at http://opensource.org/licenses/MIT

#include "VAC.h"

namespace OpenVAC
{

VAC::VAC(GManager * gManager) :
    cellManager_(),
    gManager_(gManager)
{
}

size_t VAC::numCells() const
{
    return cellManager_.size();
}

CellHandle VAC::cell(CellId id) const
{
    if (cellManager_.contains(id))
        return cellManager_[id];
    else
        return CellHandle();
}

}