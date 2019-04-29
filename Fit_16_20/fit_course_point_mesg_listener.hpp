////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2015 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 16.20Release
// Tag = development-akw-16.20.00-0
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_COURSE_POINT_MESG_LISTENER_HPP)
#define FIT_COURSE_POINT_MESG_LISTENER_HPP

#include "fit_course_point_mesg.hpp"

namespace fit
{

class CoursePointMesgListener
{
   public:
      virtual ~CoursePointMesgListener() {}
      virtual void OnMesg(CoursePointMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_COURSE_POINT_MESG_LISTENER_HPP)
