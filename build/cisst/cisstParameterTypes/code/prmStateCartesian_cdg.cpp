// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code/../prmStateCartesian.cdg

#include <cisstParameterTypes/prmStateCartesian.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 13 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmStateCartesianProxy);

prmStateCartesian::prmStateCartesian(void):
    mtsGenericObject()
    , mMovingFrame()
    , mReferenceFrame()
    , mPosition(vctFrm3())
    , mPositionIsValid(false)
    , mVelocity(0.0)
    , mVelocityIsValid(false)
    , mForce(0.0)
    , mForceIsValid(false)
{}

prmStateCartesian::prmStateCartesian(const prmStateCartesian & other):
    mtsGenericObject(other)
    , mMovingFrame(other.mMovingFrame)
    , mReferenceFrame(other.mReferenceFrame)
    , mPosition(other.mPosition)
    , mPositionIsValid(other.mPositionIsValid)
    , mVelocity(other.mVelocity)
    , mVelocityIsValid(other.mVelocityIsValid)
    , mForce(other.mForce)
    , mForceIsValid(other.mForceIsValid)
{}

prmStateCartesian & prmStateCartesian::operator = (const prmStateCartesian & other)
{
    mtsGenericObject::operator = (other);
    mMovingFrame = other.mMovingFrame;
    mReferenceFrame = other.mReferenceFrame;
    mPosition = other.mPosition;
    mPositionIsValid = other.mPositionIsValid;
    mVelocity = other.mVelocity;
    mVelocityIsValid = other.mVelocityIsValid;
    mForce = other.mForce;
    mForceIsValid = other.mForceIsValid;
    return *this;
}

prmStateCartesian::~prmStateCartesian(void){}


void prmStateCartesian::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mMovingFrame);
    cmnSerializeRaw(outputStream__cdg, this->mReferenceFrame);
    cmnSerializeRaw(outputStream__cdg, this->mPosition);
    cmnSerializeRaw(outputStream__cdg, this->mPositionIsValid);
    cmnSerializeRaw(outputStream__cdg, this->mVelocity);
    cmnSerializeRaw(outputStream__cdg, this->mVelocityIsValid);
    cmnSerializeRaw(outputStream__cdg, this->mForce);
    cmnSerializeRaw(outputStream__cdg, this->mForceIsValid);
}


void prmStateCartesian::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mMovingFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mReferenceFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionIsValid);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocityIsValid);
    cmnDeSerializeRaw(inputStream__cdg, this->mForce);
    cmnDeSerializeRaw(inputStream__cdg, this->mForceIsValid);
}


void prmStateCartesian::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmStateCartesian::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmStateCartesian >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmStateCartesian >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 23 */

/* accessors is set to: all */
void prmStateCartesian::GetMovingFrame(std::string & placeHolder) const
{
    placeHolder = this->mMovingFrame;
}

void prmStateCartesian::SetMovingFrame(const std::string & newValue)
{
    this->mMovingFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmStateCartesian::MovingFrame(void) const
{
    return this->mMovingFrame;
}

std::string & prmStateCartesian::MovingFrame(void)
{
    return this->mMovingFrame;
}

/* source line: 29 */

/* accessors is set to: all */
void prmStateCartesian::GetReferenceFrame(std::string & placeHolder) const
{
    placeHolder = this->mReferenceFrame;
}

void prmStateCartesian::SetReferenceFrame(const std::string & newValue)
{
    this->mReferenceFrame = newValue;
}


/* accessors is set to: all */
const std::string & prmStateCartesian::ReferenceFrame(void) const
{
    return this->mReferenceFrame;
}

std::string & prmStateCartesian::ReferenceFrame(void)
{
    return this->mReferenceFrame;
}

/* source line: 35 */

/* accessors is set to: all */
void prmStateCartesian::GetPosition(vctFrm3 & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmStateCartesian::SetPosition(const vctFrm3 & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmStateCartesian::Position(void) const
{
    return this->mPosition;
}

vctFrm3 & prmStateCartesian::Position(void)
{
    return this->mPosition;
}

/* source line: 41 */

/* accessors is set to: all */
void prmStateCartesian::GetPositionIsValid(bool & placeHolder) const
{
    placeHolder = this->mPositionIsValid;
}

void prmStateCartesian::SetPositionIsValid(const bool & newValue)
{
    this->mPositionIsValid = newValue;
}


/* accessors is set to: all */
const bool & prmStateCartesian::PositionIsValid(void) const
{
    return this->mPositionIsValid;
}

bool & prmStateCartesian::PositionIsValid(void)
{
    return this->mPositionIsValid;
}

/* source line: 48 */

/* accessors is set to: all */
void prmStateCartesian::GetVelocity(vct6 & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmStateCartesian::SetVelocity(const vct6 & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vct6 & prmStateCartesian::Velocity(void) const
{
    return this->mVelocity;
}

vct6 & prmStateCartesian::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 54 */

/* accessors is set to: all */
void prmStateCartesian::GetVelocityIsValid(bool & placeHolder) const
{
    placeHolder = this->mVelocityIsValid;
}

void prmStateCartesian::SetVelocityIsValid(const bool & newValue)
{
    this->mVelocityIsValid = newValue;
}


/* accessors is set to: all */
const bool & prmStateCartesian::VelocityIsValid(void) const
{
    return this->mVelocityIsValid;
}

bool & prmStateCartesian::VelocityIsValid(void)
{
    return this->mVelocityIsValid;
}

/* source line: 61 */

/* accessors is set to: all */
void prmStateCartesian::GetForce(vct6 & placeHolder) const
{
    placeHolder = this->mForce;
}

void prmStateCartesian::SetForce(const vct6 & newValue)
{
    this->mForce = newValue;
}


/* accessors is set to: all */
const vct6 & prmStateCartesian::Force(void) const
{
    return this->mForce;
}

vct6 & prmStateCartesian::Force(void)
{
    return this->mForce;
}

/* source line: 67 */

/* accessors is set to: all */
void prmStateCartesian::GetForceIsValid(bool & placeHolder) const
{
    placeHolder = this->mForceIsValid;
}

void prmStateCartesian::SetForceIsValid(const bool & newValue)
{
    this->mForceIsValid = newValue;
}


/* accessors is set to: all */
const bool & prmStateCartesian::ForceIsValid(void) const
{
    return this->mForceIsValid;
}

bool & prmStateCartesian::ForceIsValid(void)
{
    return this->mForceIsValid;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmStateCartesian & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmStateCartesian & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmStateCartesian::Copy(const prmStateCartesian & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::string >::Copy(this->mMovingFrame, source__cdg.mMovingFrame);
    cmnData<std::string >::Copy(this->mReferenceFrame, source__cdg.mReferenceFrame);
    cmnData<vctFrm3 >::Copy(this->mPosition, source__cdg.mPosition);
    cmnData<bool >::Copy(this->mPositionIsValid, source__cdg.mPositionIsValid);
    cmnData<vct6 >::Copy(this->mVelocity, source__cdg.mVelocity);
    cmnData<bool >::Copy(this->mVelocityIsValid, source__cdg.mVelocityIsValid);
    cmnData<vct6 >::Copy(this->mForce, source__cdg.mForce);
    cmnData<bool >::Copy(this->mForceIsValid, source__cdg.mForceIsValid);
}
void prmStateCartesian::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mMovingFrame, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->mReferenceFrame, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->mPosition, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mPositionIsValid, outputStream__cdg);
    cmnData<vct6 >::SerializeBinary(this->mVelocity, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mVelocityIsValid, outputStream__cdg);
    cmnData<vct6 >::SerializeBinary(this->mForce, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->mForceIsValid, outputStream__cdg);
}
void prmStateCartesian::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mMovingFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->mReferenceFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->mPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mPositionIsValid, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct6 >::DeSerializeBinary(this->mVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mVelocityIsValid, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct6 >::DeSerializeBinary(this->mForce, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->mForceIsValid, inputStream__cdg, localFormat, remoteFormat);
}
void prmStateCartesian::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mMovingFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->mReferenceFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->mPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mPositionIsValid, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct6 >::SerializeText(this->mVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mVelocityIsValid, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct6 >::SerializeText(this->mForce, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->mForceIsValid, outputStream__cdg, delimiter__cdg);
}
std::string prmStateCartesian::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<mtsGenericObject >::SerializeDescription(*this, delimiter__cdg, userDescription__cdg);
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mMovingFrame, delimiter__cdg, prefix__cdg + "MovingFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->mReferenceFrame, delimiter__cdg, prefix__cdg + "ReferenceFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->mPosition, delimiter__cdg, prefix__cdg + "Position");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mPositionIsValid, delimiter__cdg, prefix__cdg + "PositionIsValid");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct6 >::SerializeDescription(this->mVelocity, delimiter__cdg, prefix__cdg + "Velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mVelocityIsValid, delimiter__cdg, prefix__cdg + "VelocityIsValid");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct6 >::SerializeDescription(this->mForce, delimiter__cdg, prefix__cdg + "Force");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->mForceIsValid, delimiter__cdg, prefix__cdg + "ForceIsValid");
    return description__cdg.str();
}
void prmStateCartesian::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mMovingFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->mReferenceFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->mPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mPositionIsValid, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<vct6 >::DeSerializeText(this->mVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mVelocityIsValid, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<vct6 >::DeSerializeText(this->mForce, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmStateCartesian");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->mForceIsValid, inputStream__cdg, delimiter__cdg);
}
std::string prmStateCartesian::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmStateCartesian" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  MovingFrame:" << cmnData<std::string >::HumanReadable(this->mMovingFrame);
    description__cdg << "  ReferenceFrame:" << cmnData<std::string >::HumanReadable(this->mReferenceFrame);
    description__cdg << "  Position:" << cmnData<vctFrm3 >::HumanReadable(this->mPosition);
    description__cdg << "  PositionIsValid:" << cmnData<bool >::HumanReadable(this->mPositionIsValid);
    description__cdg << "  Velocity:" << cmnData<vct6 >::HumanReadable(this->mVelocity);
    description__cdg << "  VelocityIsValid:" << cmnData<bool >::HumanReadable(this->mVelocityIsValid);
    description__cdg << "  Force:" << cmnData<vct6 >::HumanReadable(this->mForce);
    description__cdg << "  ForceIsValid:" << cmnData<bool >::HumanReadable(this->mForceIsValid);
    return description__cdg.str();
}
bool prmStateCartesian::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mMovingFrame)
           && cmnData<std::string >::ScalarNumberIsFixed(this->mReferenceFrame)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<bool >::ScalarNumberIsFixed(this->mPositionIsValid)
           && cmnData<vct6 >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<bool >::ScalarNumberIsFixed(this->mVelocityIsValid)
           && cmnData<vct6 >::ScalarNumberIsFixed(this->mForce)
           && cmnData<bool >::ScalarNumberIsFixed(this->mForceIsValid)
    ;
}
size_t prmStateCartesian::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::string >::ScalarNumber(this->mMovingFrame)
           + cmnData<std::string >::ScalarNumber(this->mReferenceFrame)
           + cmnData<vctFrm3 >::ScalarNumber(this->mPosition)
           + cmnData<bool >::ScalarNumber(this->mPositionIsValid)
           + cmnData<vct6 >::ScalarNumber(this->mVelocity)
           + cmnData<bool >::ScalarNumber(this->mVelocityIsValid)
           + cmnData<vct6 >::ScalarNumber(this->mForce)
           + cmnData<bool >::ScalarNumber(this->mForceIsValid)
    ;
}
std::string prmStateCartesian::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mMovingFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mMovingFrame, index_cdg - baseIndex__cdg, prefix__cdg + "MovingFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->mReferenceFrame, index_cdg - baseIndex__cdg, prefix__cdg + "ReferenceFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->mPosition, index_cdg - baseIndex__cdg, prefix__cdg + "Position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mPositionIsValid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mPositionIsValid, index_cdg - baseIndex__cdg, prefix__cdg + "PositionIsValid");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::ScalarDescription(this->mVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "Velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mVelocityIsValid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mVelocityIsValid, index_cdg - baseIndex__cdg, prefix__cdg + "VelocityIsValid");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mForce);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::ScalarDescription(this->mForce, index_cdg - baseIndex__cdg, prefix__cdg + "Force");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mForceIsValid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->mForceIsValid, index_cdg - baseIndex__cdg, prefix__cdg + "ForceIsValid");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmStateCartesian index out of range"));
    return "";
}
double prmStateCartesian::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mMovingFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mMovingFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->mReferenceFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->mReferenceFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->mPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mPositionIsValid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mPositionIsValid, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::Scalar(this->mVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mVelocityIsValid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mVelocityIsValid, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mForce);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::Scalar(this->mForce, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->mForceIsValid);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->mForceIsValid, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmStateCartesian index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmStateCartesian >::SerializeText(const prmStateCartesian & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmStateCartesian::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::string >::SerializeText(this->mMovingFrame, jsonValue["MovingFrame"]);
    cmnDataJSON<std::string >::SerializeText(this->mReferenceFrame, jsonValue["ReferenceFrame"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<bool >::SerializeText(this->mPositionIsValid, jsonValue["PositionIsValid"]);
    cmnDataJSON<vct6 >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<bool >::SerializeText(this->mVelocityIsValid, jsonValue["VelocityIsValid"]);
    cmnDataJSON<vct6 >::SerializeText(this->mForce, jsonValue["Force"]);
    cmnDataJSON<bool >::SerializeText(this->mForceIsValid, jsonValue["ForceIsValid"]);
}
template<>
void cmnDataJSON<prmStateCartesian >::DeSerializeText(prmStateCartesian & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmStateCartesian::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["MovingFrame"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->mMovingFrame, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mMovingFrame");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mMovingFrame");
    };
    field__cdg = jsonValue["ReferenceFrame"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->mReferenceFrame, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mReferenceFrame");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: mReferenceFrame");
    };
    field__cdg = jsonValue["Position"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctFrm3 >::DeSerializeText(this->mPosition, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mPosition");
        }
    };
    field__cdg = jsonValue["PositionIsValid"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->mPositionIsValid, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mPositionIsValid");
        }
    };
    field__cdg = jsonValue["Velocity"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vct6 >::DeSerializeText(this->mVelocity, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mVelocity");
        }
    };
    field__cdg = jsonValue["VelocityIsValid"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->mVelocityIsValid, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mVelocityIsValid");
        }
    };
    field__cdg = jsonValue["Force"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vct6 >::DeSerializeText(this->mForce, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mForce");
        }
    };
    field__cdg = jsonValue["ForceIsValid"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->mForceIsValid, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mForceIsValid");
        }
    };
}
#endif // CISST_HAS_JSON


