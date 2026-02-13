// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code/../prmServoJoint.cdg

#include <cisstParameterTypes/prmServoJoint.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 14 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmServoJointProxy);

prmServoJoint::prmServoJoint(void):
    mtsGenericObject()
    , mName(std::vector<std::string>())
    , mMode(std::vector<prmSetpointMode>(0))
    , mPosition(vctDoubleVec(0))
    , mVelocity(vctDoubleVec(0))
    , mEffort(vctDoubleVec(0))
    , mPositionProjection(vctDoubleMat(0, 0, 0.0))
{}

prmServoJoint::prmServoJoint(const prmServoJoint & other):
    mtsGenericObject(other)
    , mName(other.mName)
    , mMode(other.mMode)
    , mPosition(other.mPosition)
    , mVelocity(other.mVelocity)
    , mEffort(other.mEffort)
    , mPositionProjection(other.mPositionProjection)
{}

prmServoJoint & prmServoJoint::operator = (const prmServoJoint & other)
{
    mtsGenericObject::operator = (other);
    mName = other.mName;
    mMode = other.mMode;
    mPosition = other.mPosition;
    mVelocity = other.mVelocity;
    mEffort = other.mEffort;
    mPositionProjection = other.mPositionProjection;
    return *this;
}

prmServoJoint::~prmServoJoint(void){}


void prmServoJoint::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mName);
    cmnSerializeRaw(outputStream__cdg, this->mMode);
    cmnSerializeRaw(outputStream__cdg, this->mPosition);
    cmnSerializeRaw(outputStream__cdg, this->mVelocity);
    cmnSerializeRaw(outputStream__cdg, this->mEffort);
    cmnSerializeRaw(outputStream__cdg, this->mPositionProjection);
}


void prmServoJoint::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mName);
    cmnDeSerializeRaw(inputStream__cdg, this->mMode);
    cmnDeSerializeRaw(inputStream__cdg, this->mPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->mEffort);
    cmnDeSerializeRaw(inputStream__cdg, this->mPositionProjection);
}


void prmServoJoint::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmServoJoint::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmServoJoint >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmServoJoint >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 24 */

/* accessors is set to: all */
void prmServoJoint::GetName(std::vector<std::string> & placeHolder) const
{
    placeHolder = this->mName;
}

void prmServoJoint::SetName(const std::vector<std::string> & newValue)
{
    this->mName = newValue;
}


/* accessors is set to: all */
const std::vector<std::string> & prmServoJoint::Name(void) const
{
    return this->mName;
}

std::vector<std::string> & prmServoJoint::Name(void)
{
    return this->mName;
}

/* source line: 30 */

/* accessors is set to: all */
void prmServoJoint::GetMode(std::vector<prmSetpointMode> & placeHolder) const
{
    placeHolder = this->mMode;
}

void prmServoJoint::SetMode(const std::vector<prmSetpointMode> & newValue)
{
    this->mMode = newValue;
}


/* accessors is set to: all */
const std::vector<prmSetpointMode> & prmServoJoint::Mode(void) const
{
    return this->mMode;
}

std::vector<prmSetpointMode> & prmServoJoint::Mode(void)
{
    return this->mMode;
}

/* source line: 36 */

/* accessors is set to: all */
void prmServoJoint::GetPosition(vctDoubleVec & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmServoJoint::SetPosition(const vctDoubleVec & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctDoubleVec & prmServoJoint::Position(void) const
{
    return this->mPosition;
}

vctDoubleVec & prmServoJoint::Position(void)
{
    return this->mPosition;
}

/* source line: 42 */

/* accessors is set to: all */
void prmServoJoint::GetVelocity(vctDoubleVec & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmServoJoint::SetVelocity(const vctDoubleVec & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vctDoubleVec & prmServoJoint::Velocity(void) const
{
    return this->mVelocity;
}

vctDoubleVec & prmServoJoint::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 48 */

/* accessors is set to: all */
void prmServoJoint::GetEffort(vctDoubleVec & placeHolder) const
{
    placeHolder = this->mEffort;
}

void prmServoJoint::SetEffort(const vctDoubleVec & newValue)
{
    this->mEffort = newValue;
}


/* accessors is set to: all */
const vctDoubleVec & prmServoJoint::Effort(void) const
{
    return this->mEffort;
}

vctDoubleVec & prmServoJoint::Effort(void)
{
    return this->mEffort;
}

/* source line: 54 */

/* accessors is set to: all */
void prmServoJoint::GetPositionProjection(vctDoubleMat & placeHolder) const
{
    placeHolder = this->mPositionProjection;
}

void prmServoJoint::SetPositionProjection(const vctDoubleMat & newValue)
{
    this->mPositionProjection = newValue;
}


/* accessors is set to: all */
const vctDoubleMat & prmServoJoint::PositionProjection(void) const
{
    return this->mPositionProjection;
}

vctDoubleMat & prmServoJoint::PositionProjection(void)
{
    return this->mPositionProjection;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmServoJoint & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmServoJoint & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmServoJoint::Copy(const prmServoJoint & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<std::vector<std::string> >::Copy(this->mName, source__cdg.mName);
    cmnData<std::vector<prmSetpointMode> >::Copy(this->mMode, source__cdg.mMode);
    cmnData<vctDoubleVec >::Copy(this->mPosition, source__cdg.mPosition);
    cmnData<vctDoubleVec >::Copy(this->mVelocity, source__cdg.mVelocity);
    cmnData<vctDoubleVec >::Copy(this->mEffort, source__cdg.mEffort);
    cmnData<vctDoubleMat >::Copy(this->mPositionProjection, source__cdg.mPositionProjection);
}
void prmServoJoint::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->mName, outputStream__cdg);
    cmnData<std::vector<prmSetpointMode> >::SerializeBinary(this->mMode, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->mPosition, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->mVelocity, outputStream__cdg);
    cmnData<vctDoubleVec >::SerializeBinary(this->mEffort, outputStream__cdg);
    cmnData<vctDoubleMat >::SerializeBinary(this->mPositionProjection, outputStream__cdg);
}
void prmServoJoint::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->mName, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<prmSetpointMode> >::DeSerializeBinary(this->mMode, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->mPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->mVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleVec >::DeSerializeBinary(this->mEffort, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctDoubleMat >::DeSerializeBinary(this->mPositionProjection, inputStream__cdg, localFormat, remoteFormat);
}
void prmServoJoint::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<std::vector<std::string> >::SerializeText(this->mName, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<prmSetpointMode> >::SerializeText(this->mMode, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->mPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->mVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::SerializeText(this->mEffort, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::SerializeText(this->mPositionProjection, outputStream__cdg, delimiter__cdg);
}
std::string prmServoJoint::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->mName, delimiter__cdg, prefix__cdg + "Name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<prmSetpointMode> >::SerializeDescription(this->mMode, delimiter__cdg, prefix__cdg + "Mode");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->mPosition, delimiter__cdg, prefix__cdg + "Position");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->mVelocity, delimiter__cdg, prefix__cdg + "Velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleVec >::SerializeDescription(this->mEffort, delimiter__cdg, prefix__cdg + "Effort");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctDoubleMat >::SerializeDescription(this->mPositionProjection, delimiter__cdg, prefix__cdg + "PositionProjection");
    return description__cdg.str();
}
void prmServoJoint::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->mName, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<std::vector<prmSetpointMode> >::DeSerializeText(this->mMode, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->mPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->mVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<vctDoubleVec >::DeSerializeText(this->mEffort, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoJoint");
    }
    someData__cdg = true;
    cmnData<vctDoubleMat >::DeSerializeText(this->mPositionProjection, inputStream__cdg, delimiter__cdg);
}
std::string prmServoJoint::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmServoJoint" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  Name:" << cmnData<std::vector<std::string> >::HumanReadable(this->mName);
    description__cdg << "  Mode:" << cmnData<std::vector<prmSetpointMode> >::HumanReadable(this->mMode);
    description__cdg << "  Position:" << cmnData<vctDoubleVec >::HumanReadable(this->mPosition);
    description__cdg << "  Velocity:" << cmnData<vctDoubleVec >::HumanReadable(this->mVelocity);
    description__cdg << "  Effort:" << cmnData<vctDoubleVec >::HumanReadable(this->mEffort);
    description__cdg << "  PositionProjection:" << cmnData<vctDoubleMat >::HumanReadable(this->mPositionProjection);
    return description__cdg.str();
}
bool prmServoJoint::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->mName)
           && cmnData<std::vector<prmSetpointMode> >::ScalarNumberIsFixed(this->mMode)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<vctDoubleVec >::ScalarNumberIsFixed(this->mEffort)
           && cmnData<vctDoubleMat >::ScalarNumberIsFixed(this->mPositionProjection)
    ;
}
size_t prmServoJoint::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->mName)
           + cmnData<std::vector<prmSetpointMode> >::ScalarNumber(this->mMode)
           + cmnData<vctDoubleVec >::ScalarNumber(this->mPosition)
           + cmnData<vctDoubleVec >::ScalarNumber(this->mVelocity)
           + cmnData<vctDoubleVec >::ScalarNumber(this->mEffort)
           + cmnData<vctDoubleMat >::ScalarNumber(this->mPositionProjection)
    ;
}
std::string prmServoJoint::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->mName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->mName, index_cdg - baseIndex__cdg, prefix__cdg + "Name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<prmSetpointMode> >::ScalarNumber(this->mMode);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<prmSetpointMode> >::ScalarDescription(this->mMode, index_cdg - baseIndex__cdg, prefix__cdg + "Mode");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->mPosition, index_cdg - baseIndex__cdg, prefix__cdg + "Position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->mVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "Velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::ScalarDescription(this->mEffort, index_cdg - baseIndex__cdg, prefix__cdg + "Effort");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mPositionProjection);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::ScalarDescription(this->mPositionProjection, index_cdg - baseIndex__cdg, prefix__cdg + "PositionProjection");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmServoJoint index out of range"));
    return "";
}
double prmServoJoint::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->mName);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->mName, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<prmSetpointMode> >::ScalarNumber(this->mMode);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<prmSetpointMode> >::Scalar(this->mMode, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->mPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->mVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleVec >::ScalarNumber(this->mEffort);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleVec >::Scalar(this->mEffort, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctDoubleMat >::ScalarNumber(this->mPositionProjection);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctDoubleMat >::Scalar(this->mPositionProjection, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmServoJoint index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmServoJoint >::SerializeText(const prmServoJoint & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmServoJoint::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->mName, jsonValue["Name"]);
    cmnDataJSON<std::vector<prmSetpointMode> >::SerializeText(this->mMode, jsonValue["Mode"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vctDoubleVec >::SerializeText(this->mEffort, jsonValue["Effort"]);
    cmnDataJSON<vctDoubleMat >::SerializeText(this->mPositionProjection, jsonValue["PositionProjection"]);
}
template<>
void cmnDataJSON<prmServoJoint >::DeSerializeText(prmServoJoint & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmServoJoint::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["Name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->mName, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mName");
        }
    };
    field__cdg = jsonValue["Mode"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<prmSetpointMode> >::DeSerializeText(this->mMode, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mMode");
        }
    };
    field__cdg = jsonValue["Position"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctDoubleVec >::DeSerializeText(this->mPosition, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mPosition");
        }
    };
    field__cdg = jsonValue["Velocity"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctDoubleVec >::DeSerializeText(this->mVelocity, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mVelocity");
        }
    };
    field__cdg = jsonValue["Effort"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctDoubleVec >::DeSerializeText(this->mEffort, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mEffort");
        }
    };
    field__cdg = jsonValue["PositionProjection"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctDoubleMat >::DeSerializeText(this->mPositionProjection, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mPositionProjection");
        }
    };
}
#endif // CISST_HAS_JSON


