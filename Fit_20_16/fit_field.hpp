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


#if !defined(FIELD_HPP)
#define FIELD_HPP

#include <cstdio>
#include <iosfwd>
#include <string>
#include <vector>
#include "fit.hpp"
#include "fit_profile.hpp"
#include "fit_field_base.hpp"

namespace fit
{

class Field
    : public FieldBase
{
public:
    Field(void);
    Field(const Field &field);
    Field(const Profile::MESG_INDEX mesgIndex, const FIT_UINT16 fieldIndex);
    Field(const FIT_UINT16 mesgNum, const FIT_UINT8 fieldNum);
    Field(const std::string& mesgName, const std::string& fieldName);

    FIT_UINT16 GetIndex(void) const;

    virtual FIT_BOOL IsValid(void) const override;
    virtual FIT_BOOL GetIsAccumulated() const override;
    virtual std::string GetName(void) const override;
    virtual FIT_UINT8 GetNum(void) const override;
    virtual FIT_UINT8 GetType(void) const override;
    virtual std::string GetUnits(void) const override;
    virtual FIT_FLOAT64 GetScale(void) const override;
    virtual FIT_FLOAT64 GetOffset(void) const override;
    virtual FIT_UINT16 GetNumComponents(void) const override;
    virtual FIT_UINT16 GetNumSubFields(void) const override;
    virtual const Profile::FIELD_COMPONENT* GetComponent(const FIT_UINT16 component) const override;
    virtual const Profile::SUBFIELD* GetSubField(const FIT_UINT16 subFieldIndex) const override;

    // Unhide the overloaded get methods from FieldBase.
    using FieldBase::GetName;
    using FieldBase::GetType;
    using FieldBase::GetUnits;
    using FieldBase::GetScale;
    using FieldBase::GetOffset;

private:
    const Profile::MESG* profile;
    FIT_UINT16 profileIndex;
};

} // namespace fit

#endif // defined(FIELD_HPP)
