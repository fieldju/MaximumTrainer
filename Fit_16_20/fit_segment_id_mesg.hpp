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


#if !defined(FIT_SEGMENT_ID_MESG_HPP)
#define FIT_SEGMENT_ID_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class SegmentIdMesg : public Mesg
{
   public:
      SegmentIdMesg(void) : Mesg(Profile::MESG_SEGMENT_ID)
      {
      }

      SegmentIdMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns name field
      // Comment: Friendly name assigned to segment
      ///////////////////////////////////////////////////////////////////////
      FIT_WSTRING GetName(void) const
      {
         return GetFieldSTRINGValue(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set name field
      // Comment: Friendly name assigned to segment
      ///////////////////////////////////////////////////////////////////////
      void SetName(FIT_WSTRING name)
      {
         SetFieldSTRINGValue(0, name, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns uuid field
      // Comment: UUID of the segment
      ///////////////////////////////////////////////////////////////////////
      FIT_WSTRING GetUuid(void) const
      {
         return GetFieldSTRINGValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set uuid field
      // Comment: UUID of the segment
      ///////////////////////////////////////////////////////////////////////
      void SetUuid(FIT_WSTRING uuid)
      {
         SetFieldSTRINGValue(1, uuid, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns sport field
      // Comment: Sport associated with the segment
      ///////////////////////////////////////////////////////////////////////
      FIT_SPORT GetSport(void) const
      {
         return GetFieldENUMValue(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set sport field
      // Comment: Sport associated with the segment
      ///////////////////////////////////////////////////////////////////////
      void SetSport(FIT_SPORT sport)
      {
         SetFieldENUMValue(2, sport, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns enabled field
      // Comment: Segment enabled for evaluation
      ///////////////////////////////////////////////////////////////////////
      FIT_BOOL GetEnabled(void) const
      {
         return GetFieldENUMValue(3, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set enabled field
      // Comment: Segment enabled for evaluation
      ///////////////////////////////////////////////////////////////////////
      void SetEnabled(FIT_BOOL enabled)
      {
         SetFieldENUMValue(3, enabled, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns user_profile_primary_key field
      // Comment: Primary key of the user that created the segment 
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetUserProfilePrimaryKey(void) const
      {
         return GetFieldUINT32Value(4, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set user_profile_primary_key field
      // Comment: Primary key of the user that created the segment 
      ///////////////////////////////////////////////////////////////////////
      void SetUserProfilePrimaryKey(FIT_UINT32 userProfilePrimaryKey)
      {
         SetFieldUINT32Value(4, userProfilePrimaryKey, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns device_id field
      // Comment: ID of the device that created the segment
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetDeviceId(void) const
      {
         return GetFieldUINT32Value(5, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set device_id field
      // Comment: ID of the device that created the segment
      ///////////////////////////////////////////////////////////////////////
      void SetDeviceId(FIT_UINT32 deviceId)
      {
         SetFieldUINT32Value(5, deviceId, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns default_race_leader field
      // Comment: Index for the Leader Board entry selected as the default race participant
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetDefaultRaceLeader(void) const
      {
         return GetFieldUINT8Value(6, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set default_race_leader field
      // Comment: Index for the Leader Board entry selected as the default race participant
      ///////////////////////////////////////////////////////////////////////
      void SetDefaultRaceLeader(FIT_UINT8 defaultRaceLeader)
      {
         SetFieldUINT8Value(6, defaultRaceLeader, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns delete_status field
      // Comment: Indicates if any segments should be deleted
      ///////////////////////////////////////////////////////////////////////
      FIT_SEGMENT_DELETE_STATUS GetDeleteStatus(void) const
      {
         return GetFieldENUMValue(7, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set delete_status field
      // Comment: Indicates if any segments should be deleted
      ///////////////////////////////////////////////////////////////////////
      void SetDeleteStatus(FIT_SEGMENT_DELETE_STATUS deleteStatus)
      {
         SetFieldENUMValue(7, deleteStatus, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns selection_type field
      // Comment: Indicates how the segment was selected to be sent to the device
      ///////////////////////////////////////////////////////////////////////
      FIT_SEGMENT_SELECTION_TYPE GetSelectionType(void) const
      {
         return GetFieldENUMValue(8, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set selection_type field
      // Comment: Indicates how the segment was selected to be sent to the device
      ///////////////////////////////////////////////////////////////////////
      void SetSelectionType(FIT_SEGMENT_SELECTION_TYPE selectionType)
      {
         SetFieldENUMValue(8, selectionType, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_SEGMENT_ID_MESG_HPP)
