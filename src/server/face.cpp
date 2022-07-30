#include "face.h"

const std::vector<Vector3i> BlockFaceOffsets = {
        {  0, -1,  0 },
        {  0,  1,  0 },
        {  0,  0, -1 },
        {  0,  0,  1 },
        { -1,  0,  0 },
        {  1,  0,  0 }
};