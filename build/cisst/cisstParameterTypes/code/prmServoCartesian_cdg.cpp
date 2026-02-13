// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstParameterTypes/code/../prmServoCartesian.cdg

#include <cisstParameterTypes/prmServoCartesian.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 14 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(prmServoCartesianProxy);

prmServoCartesian::prmServoCartesian(void):
    mtsGenericObject()
    , mTaskFrame(vctFrm3())
    , mPosition(vctFrm3())
    , mVelocity(vct6(0.0))
    , mForce(vct6(0.0))
    , mAxisMode(vctFixedSizeVector<prmSetpointMode, 6>(prmSetpointMode::NONE, prmSetpointMode::NONE, prmSetpointMode::NONE, prmSetpointMode::NONE, prmSetpointMode::NONE, prmSetpointMode::NONE))
{}

prmServoCartesian::prmServoCartesian(const prmServoCartesian & other):
    mtsGenericObject(other)
    , mTaskFrame(other.mTaskFrame)
    , mPosition(other.mPosition)
    , mVelocity(other.mVelocity)
    , mForce(other.mForce)
    , mAxisMode(other.mAxisMode)
{}

prmServoCartesian & prmServoCartesian::operator = (const prmServoCartesian & other)
{
    mtsGenericObject::operator = (other);
    mTaskFrame = other.mTaskFrame;
    mPosition = other.mPosition;
    mVelocity = other.mVelocity;
    mForce = other.mForce;
    mAxisMode = other.mAxisMode;
    return *this;
}

prmServoCartesian::~prmServoCartesian(void){}


void prmServoCartesian::SerializeRaw(std::ostream & outputStream__cdg) const
{
    mtsGenericObject::SerializeRaw(outputStream__cdg);
    cmnSerializeRaw(outputStream__cdg, this->mTaskFrame);
    cmnSerializeRaw(outputStream__cdg, this->mPosition);
    cmnSerializeRaw(outputStream__cdg, this->mVelocity);
    cmnSerializeRaw(outputStream__cdg, this->mForce);
    cmnSerializeRaw(outputStream__cdg, this->mAxisMode);
}


void prmServoCartesian::DeSerializeRaw(std::istream & inputStream__cdg)
{
    mtsGenericObject::DeSerializeRaw(inputStream__cdg);
    cmnDeSerializeRaw(inputStream__cdg, this->mTaskFrame);
    cmnDeSerializeRaw(inputStream__cdg, this->mPosition);
    cmnDeSerializeRaw(inputStream__cdg, this->mVelocity);
    cmnDeSerializeRaw(inputStream__cdg, this->mForce);
    cmnDeSerializeRaw(inputStream__cdg, this->mAxisMode);
}


void prmServoCartesian::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void prmServoCartesian::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<prmServoCartesian >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<prmServoCartesian >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 24 */

/* accessors is set to: all */
void prmServoCartesian::GetTaskFrame(vctFrm3 & placeHolder) const
{
    placeHolder = this->mTaskFrame;
}

void prmServoCartesian::SetTaskFrame(const vctFrm3 & newValue)
{
    this->mTaskFrame = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmServoCartesian::TaskFrame(void) const
{
    return this->mTaskFrame;
}

vctFrm3 & prmServoCartesian::TaskFrame(void)
{
    return this->mTaskFrame;
}

/* source line: 30 */

/* accessors is set to: all */
void prmServoCartesian::GetPosition(vctFrm3 & placeHolder) const
{
    placeHolder = this->mPosition;
}

void prmServoCartesian::SetPosition(const vctFrm3 & newValue)
{
    this->mPosition = newValue;
}


/* accessors is set to: all */
const vctFrm3 & prmServoCartesian::Position(void) const
{
    return this->mPosition;
}

vctFrm3 & prmServoCartesian::Position(void)
{
    return this->mPosition;
}

/* source line: 36 */

/* accessors is set to: all */
void prmServoCartesian::GetVelocity(vct6 & placeHolder) const
{
    placeHolder = this->mVelocity;
}

void prmServoCartesian::SetVelocity(const vct6 & newValue)
{
    this->mVelocity = newValue;
}


/* accessors is set to: all */
const vct6 & prmServoCartesian::Velocity(void) const
{
    return this->mVelocity;
}

vct6 & prmServoCartesian::Velocity(void)
{
    return this->mVelocity;
}

/* source line: 42 */

/* accessors is set to: all */
void prmServoCartesian::GetForce(vct6 & placeHolder) const
{
    placeHolder = this->mForce;
}

void prmServoCartesian::SetForce(const vct6 & newValue)
{
    this->mForce = newValue;
}


/* accessors is set to: all */
const vct6 & prmServoCartesian::Force(void) const
{
    return this->mForce;
}

vct6 & prmServoCartesian::Force(void)
{
    return this->mForce;
}

/* source line: 48 */

/* accessors is set to: all */
void prmServoCartesian::GetAxisMode(vctFixedSizeVector<prmSetpointMode, 6> & placeHolder) const
{
    placeHolder = this->mAxisMode;
}

void prmServoCartesian::SetAxisMode(const vctFixedSizeVector<prmSetpointMode, 6> & newValue)
{
    this->mAxisMode = newValue;
}


/* accessors is set to: all */
const vctFixedSizeVector<prmSetpointMode, 6> & prmServoCartesian::AxisMode(void) const
{
    return this->mAxisMode;
}

vctFixedSizeVector<prmSetpointMode, 6> & prmServoCartesian::AxisMode(void)
{
    return this->mAxisMode;
}

/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const prmServoCartesian & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, prmServoCartesian & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void prmServoCartesian::Copy(const prmServoCartesian & source__cdg) {
    cmnData<mtsGenericObject >::Copy(*this, source__cdg);
    cmnData<vctFrm3 >::Copy(this->mTaskFrame, source__cdg.mTaskFrame);
    cmnData<vctFrm3 >::Copy(this->mPosition, source__cdg.mPosition);
    cmnData<vct6 >::Copy(this->mVelocity, source__cdg.mVelocity);
    cmnData<vct6 >::Copy(this->mForce, source__cdg.mForce);
    cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::Copy(this->mAxisMode, source__cdg.mAxisMode);
}
void prmServoCartesian::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::SerializeBinary(*this, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->mTaskFrame, outputStream__cdg);
    cmnData<vctFrm3 >::SerializeBinary(this->mPosition, outputStream__cdg);
    cmnData<vct6 >::SerializeBinary(this->mVelocity, outputStream__cdg);
    cmnData<vct6 >::SerializeBinary(this->mForce, outputStream__cdg);
    cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::SerializeBinary(this->mAxisMode, outputStream__cdg);
}
void prmServoCartesian::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<mtsGenericObject >::DeSerializeBinary(*this, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->mTaskFrame, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFrm3 >::DeSerializeBinary(this->mPosition, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct6 >::DeSerializeBinary(this->mVelocity, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vct6 >::DeSerializeBinary(this->mForce, inputStream__cdg, localFormat, remoteFormat);
    cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::DeSerializeBinary(this->mAxisMode, inputStream__cdg, localFormat, remoteFormat);
}
void prmServoCartesian::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<vctFrm3 >::SerializeText(this->mTaskFrame, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::SerializeText(this->mPosition, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct6 >::SerializeText(this->mVelocity, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vct6 >::SerializeText(this->mForce, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::SerializeText(this->mAxisMode, outputStream__cdg, delimiter__cdg);
}
std::string prmServoCartesian::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->mTaskFrame, delimiter__cdg, prefix__cdg + "TaskFrame");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFrm3 >::SerializeDescription(this->mPosition, delimiter__cdg, prefix__cdg + "Position");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct6 >::SerializeDescription(this->mVelocity, delimiter__cdg, prefix__cdg + "Velocity");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vct6 >::SerializeDescription(this->mForce, delimiter__cdg, prefix__cdg + "Force");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::SerializeDescription(this->mAxisMode, delimiter__cdg, prefix__cdg + "AxisMode");
    return description__cdg.str();
}
void prmServoCartesian::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoCartesian");
    }
    someData__cdg = true;
    cmnData<mtsGenericObject >::DeSerializeText(*this, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoCartesian");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->mTaskFrame, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoCartesian");
    }
    someData__cdg = true;
    cmnData<vctFrm3 >::DeSerializeText(this->mPosition, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoCartesian");
    }
    someData__cdg = true;
    cmnData<vct6 >::DeSerializeText(this->mVelocity, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoCartesian");
    }
    someData__cdg = true;
    cmnData<vct6 >::DeSerializeText(this->mForce, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "prmServoCartesian");
    }
    someData__cdg = true;
    cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::DeSerializeText(this->mAxisMode, inputStream__cdg, delimiter__cdg);
}
std::string prmServoCartesian::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "prmServoCartesian" << std::endl;
    description__cdg << cmnData< mtsGenericObject >::HumanReadable(*this) << std::endl;
    description__cdg << "  TaskFrame:" << cmnData<vctFrm3 >::HumanReadable(this->mTaskFrame);
    description__cdg << "  Position:" << cmnData<vctFrm3 >::HumanReadable(this->mPosition);
    description__cdg << "  Velocity:" << cmnData<vct6 >::HumanReadable(this->mVelocity);
    description__cdg << "  Force:" << cmnData<vct6 >::HumanReadable(this->mForce);
    description__cdg << "  AxisMode:" << cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::HumanReadable(this->mAxisMode);
    return description__cdg.str();
}
bool prmServoCartesian::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<mtsGenericObject >::ScalarNumberIsFixed(*this)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->mTaskFrame)
           && cmnData<vctFrm3 >::ScalarNumberIsFixed(this->mPosition)
           && cmnData<vct6 >::ScalarNumberIsFixed(this->mVelocity)
           && cmnData<vct6 >::ScalarNumberIsFixed(this->mForce)
           && cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::ScalarNumberIsFixed(this->mAxisMode)
    ;
}
size_t prmServoCartesian::ScalarNumber(void) const {
    return 0
           + cmnData< mtsGenericObject >::ScalarNumber(*this)
           + cmnData<vctFrm3 >::ScalarNumber(this->mTaskFrame)
           + cmnData<vctFrm3 >::ScalarNumber(this->mPosition)
           + cmnData<vct6 >::ScalarNumber(this->mVelocity)
           + cmnData<vct6 >::ScalarNumber(this->mForce)
           + cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::ScalarNumber(this->mAxisMode)
    ;
}
std::string prmServoCartesian::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::ScalarDescription(*this, index_cdg - baseIndex__cdg, prefix__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mTaskFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->mTaskFrame, index_cdg - baseIndex__cdg, prefix__cdg + "TaskFrame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::ScalarDescription(this->mPosition, index_cdg - baseIndex__cdg, prefix__cdg + "Position");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::ScalarDescription(this->mVelocity, index_cdg - baseIndex__cdg, prefix__cdg + "Velocity");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mForce);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::ScalarDescription(this->mForce, index_cdg - baseIndex__cdg, prefix__cdg + "Force");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::ScalarNumber(this->mAxisMode);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::ScalarDescription(this->mAxisMode, index_cdg - baseIndex__cdg, prefix__cdg + "AxisMode");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: prmServoCartesian index out of range"));
    return "";
}
double prmServoCartesian::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<mtsGenericObject >::ScalarNumber(*this);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<mtsGenericObject >::Scalar(*this, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mTaskFrame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->mTaskFrame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFrm3 >::ScalarNumber(this->mPosition);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFrm3 >::Scalar(this->mPosition, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mVelocity);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::Scalar(this->mVelocity, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vct6 >::ScalarNumber(this->mForce);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vct6 >::Scalar(this->mForce, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::ScalarNumber(this->mAxisMode);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<vctFixedSizeVector<prmSetpointMode, 6> >::Scalar(this->mAxisMode, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: prmServoCartesian index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<prmServoCartesian >::SerializeText(const prmServoCartesian & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void prmServoCartesian::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<mtsGenericObject >::SerializeText(*(dynamic_cast<const mtsGenericObject*>(this)), jsonValue);
    cmnDataJSON<vctFrm3 >::SerializeText(this->mTaskFrame, jsonValue["TaskFrame"]);
    cmnDataJSON<vctFrm3 >::SerializeText(this->mPosition, jsonValue["Position"]);
    cmnDataJSON<vct6 >::SerializeText(this->mVelocity, jsonValue["Velocity"]);
    cmnDataJSON<vct6 >::SerializeText(this->mForce, jsonValue["Force"]);
    cmnDataJSON<vctFixedSizeVector<prmSetpointMode, 6> >::SerializeText(this->mAxisMode, jsonValue["AxisMode"]);
}
template<>
void cmnDataJSON<prmServoCartesian >::DeSerializeText(prmServoCartesian & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void prmServoCartesian::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    cmnDataJSON<mtsGenericObject >::DeSerializeText(*(dynamic_cast<mtsGenericObject*>(this)), jsonValue);
    Json::Value field__cdg;
    field__cdg = jsonValue["TaskFrame"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctFrm3 >::DeSerializeText(this->mTaskFrame, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mTaskFrame");
        }
    };
    field__cdg = jsonValue["Position"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctFrm3 >::DeSerializeText(this->mPosition, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mPosition");
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
    field__cdg = jsonValue["Force"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vct6 >::DeSerializeText(this->mForce, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mForce");
        }
    };
    field__cdg = jsonValue["AxisMode"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<vctFixedSizeVector<prmSetpointMode, 6> >::DeSerializeText(this->mAxisMode, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < mAxisMode");
        }
    };
}
#endif // CISST_HAS_JSON


