//#############################################################################
//
//  This file is part of ImagePlay.
//
//  ImagePlay is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  ImagePlay is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with ImagePlay.  If not, see <http://www.gnu.org/licenses/>.
//
//#############################################################################

#ifndef IPLTriangleSegmentation_H
#define IPLTriangleSegmentation_H

#include "IPL_global.h"
#include "IPLProcess.h"

/**
 * @brief IPLTriangleSegmentation
 * Segmentation by triangle method.
 */
class IPLSHARED_EXPORT IPLTriangleSegmentation : public IPLClonableProcess<IPLTriangleSegmentation>
{
public:
                            IPLTriangleSegmentation() : IPLClonableProcess() { init(); }
                            ~IPLTriangleSegmentation()  { destroy(); }

    void                    init                    ();
    void                    destroy                 ();
    bool                    processInputData        (IPLImage*, int, bool useOpenCV);
    IPLData*                getResultData           (int);

protected:
    IPLImage*               _result;
};

#endif // IPLTriangleSegmentation_H
