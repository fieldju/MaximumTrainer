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


#if !defined(FIT_MESG_WITH_EVENT_LISTENER_HPP)
#define FIT_MESG_WITH_EVENT_LISTENER_HPP

#include "fit_mesg_with_event.hpp"

namespace fit
{

class MesgWithEventListener
{
   public:
      virtual ~MesgWithEventListener() {}
      virtual void OnMesg(MesgWithEvent& mesg) = 0;
};

} // namespace fit

#endif // !defined(FIT_MESG_WITH_EVENT_LISTENER_HPP)
