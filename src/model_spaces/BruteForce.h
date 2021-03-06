//
// FILE:        BruteForce.h
// LICENSE:     The MIT license
// PURPOUSE:    Brute-force model space: No optimization at all in the collision detection.
// AUTHORS:     Alberto Alonso <rydencillo@gmail.com>
//

#pragma once

#include "../Collision.h"
#include "IModelSpace.h"

namespace ModelSpaces
{
    class BruteForce : public IModelSpace
    {
    public:
                        BruteForce      ();
        virtual         ~BruteForce     ();

        virtual void    load            ( const vec3f* vertices, unsigned int vertexCount, const Face* faces, unsigned int faceCount );
        virtual bool    intersect       ( const Ray& ray, Collision* collision ) const;
        virtual void    getBounds       ( BoundingBox* bbox ) const;


    private:
        const Face*     mFaces;
        const vec3f*    mVertices;
        vec3f*          mNormals;
        vec3f*          mFaceNormals;
        unsigned int    mFaceCount;
        unsigned int    mVertexCount;
        BoundingBox     mBounds;
    };
}
