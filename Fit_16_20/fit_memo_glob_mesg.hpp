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


#if !defined(FIT_MEMO_GLOB_MESG_HPP)
#define FIT_MEMO_GLOB_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class MemoGlobMesg : public Mesg
{
   public:
      MemoGlobMesg(void) : Mesg(Profile::MESG_MEMO_GLOB)
      {
      }

      MemoGlobMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns part_index field
      // Comment: Sequence number of memo blocks
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT32 GetPartIndex(void) const
      {
         return GetFieldUINT32Value(250, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set part_index field
      // Comment: Sequence number of memo blocks
      ///////////////////////////////////////////////////////////////////////
      void SetPartIndex(FIT_UINT32 partIndex)
      {
         SetFieldUINT32Value(250, partIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns number of memo
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT8 GetNumMemo(void) const
      {
         return GetFieldNumValues(0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns memo field
      // Comment: Block of utf8 bytes 
      ///////////////////////////////////////////////////////////////////////
      FIT_BYTE GetMemo(FIT_UINT8 index) const
      {
         return GetFieldBYTEValue(0, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set memo field
      // Comment: Block of utf8 bytes 
      ///////////////////////////////////////////////////////////////////////
      void SetMemo(FIT_UINT8 index, FIT_BYTE memo)
      {
         SetFieldBYTEValue(0, memo, index, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns message_number field
      // Comment: Allows relating glob to another mesg  If used only required for first part of each memo_glob
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetMessageNumber(void) const
      {
         return GetFieldUINT16Value(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set message_number field
      // Comment: Allows relating glob to another mesg  If used only required for first part of each memo_glob
      ///////////////////////////////////////////////////////////////////////
      void SetMessageNumber(FIT_UINT16 messageNumber)
      {
         SetFieldUINT16Value(1, messageNumber, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns message_index field
      // Comment: Index of external mesg
      ///////////////////////////////////////////////////////////////////////
      FIT_MESSAGE_INDEX GetMessageIndex(void) const
      {
         return GetFieldUINT16Value(2, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set message_index field
      // Comment: Index of external mesg
      ///////////////////////////////////////////////////////////////////////
      void SetMessageIndex(FIT_MESSAGE_INDEX messageIndex)
      {
         SetFieldUINT16Value(2, messageIndex, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_MEMO_GLOB_MESG_HPP)
