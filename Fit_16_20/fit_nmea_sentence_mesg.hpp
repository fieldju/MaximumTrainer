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


#if !defined(FIT_NMEA_SENTENCE_MESG_HPP)
#define FIT_NMEA_SENTENCE_MESG_HPP

#include "fit_mesg.hpp"

namespace fit
{

class NmeaSentenceMesg : public Mesg
{
   public:
      NmeaSentenceMesg(void) : Mesg(Profile::MESG_NMEA_SENTENCE)
      {
      }

      NmeaSentenceMesg(const Mesg &mesg) : Mesg(mesg)
      {
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns timestamp field
      // Units: s
      // Comment: Timestamp message was output
      ///////////////////////////////////////////////////////////////////////
      FIT_DATE_TIME GetTimestamp(void) const
      {
         return GetFieldUINT32Value(253, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set timestamp field
      // Units: s
      // Comment: Timestamp message was output
      ///////////////////////////////////////////////////////////////////////
      void SetTimestamp(FIT_DATE_TIME timestamp)
      {
         SetFieldUINT32Value(253, timestamp, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns timestamp_ms field
      // Units: ms
      // Comment: Fractional part of timestamp, added to timestamp
      ///////////////////////////////////////////////////////////////////////
      FIT_UINT16 GetTimestampMs(void) const
      {
         return GetFieldUINT16Value(0, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set timestamp_ms field
      // Units: ms
      // Comment: Fractional part of timestamp, added to timestamp
      ///////////////////////////////////////////////////////////////////////
      void SetTimestampMs(FIT_UINT16 timestampMs)
      {
         SetFieldUINT16Value(0, timestampMs, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Returns sentence field
      // Comment: NMEA sentence
      ///////////////////////////////////////////////////////////////////////
      FIT_WSTRING GetSentence(void) const
      {
         return GetFieldSTRINGValue(1, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

      ///////////////////////////////////////////////////////////////////////
      // Set sentence field
      // Comment: NMEA sentence
      ///////////////////////////////////////////////////////////////////////
      void SetSentence(FIT_WSTRING sentence)
      {
         SetFieldSTRINGValue(1, sentence, 0, FIT_SUBFIELD_INDEX_MAIN_FIELD);
      }

};

} // namespace fit

#endif // !defined(FIT_NMEA_SENTENCE_MESG_HPP)
