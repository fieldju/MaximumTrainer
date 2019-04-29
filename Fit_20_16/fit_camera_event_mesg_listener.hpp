////////////////////////////////////////////////////////////////////////////////
// The following FIT Protocol software provided may be used with FIT protocol
// devices only and remains the copyrighted property of Dynastream Innovations Inc.
// The software is being provided on an "as-is" basis and as an accommodation,
// and therefore all warranties, representations, or guarantees of any kind
// (whether express, implied or statutory) including, without limitation,
// warranties of merchantability, non-infringement, or fitness for a particular
// purpose, are specifically disclaimed.
//
// Copyright 2016 Dynastream Innovations Inc.
////////////////////////////////////////////////////////////////////////////////
// ****WARNING****  This file is auto-generated!  Do NOT edit this file.
// Profile Version = 20.16Release
// Tag = production/akw/20.16.00-0-gce20b51
////////////////////////////////////////////////////////////////////////////////


#if !defined(FIT_CAMERA_EVENT_MESG_LISTENER_HPP)
#define FIT_CAMERA_EVENT_MESG_LISTENER_HPP

#include "fit_camera_event_mesg.hpp"

namespace fit
{

class CameraEventMesgListener
{
public:
    virtual ~CameraEventMesgListener() {}
    virtual void OnMesg(CameraEventMesg& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_CAMERA_EVENT_MESG_LISTENER_HPP)
