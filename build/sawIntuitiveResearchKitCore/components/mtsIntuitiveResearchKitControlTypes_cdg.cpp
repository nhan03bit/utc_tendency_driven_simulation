// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/mtsIntuitiveResearchKitControlTypes.cdg

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKitControlTypes.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 9 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(mtsIntuitiveResearchKitControlTypesProxy);

mtsIntuitiveResearchKitControlTypes::mtsIntuitiveResearchKitControlTypes(void)
{}

mtsIntuitiveResearchKitControlTypes::mtsIntuitiveResearchKitControlTypes(const mtsIntuitiveResearchKitControlTypes & CMN_UNUSED(other))
{}

mtsIntuitiveResearchKitControlTypes & mtsIntuitiveResearchKitControlTypes::operator = (const mtsIntuitiveResearchKitControlTypes & CMN_UNUSED(other))
{
    return *this;
}

mtsIntuitiveResearchKitControlTypes::~mtsIntuitiveResearchKitControlTypes(void){}


void mtsIntuitiveResearchKitControlTypes::SerializeRaw(std::ostream & CMN_UNUSED(outputStream__cdg)) const
{
}


void mtsIntuitiveResearchKitControlTypes::DeSerializeRaw(std::istream & CMN_UNUSED(inputStream__cdg))
{
}


void mtsIntuitiveResearchKitControlTypes::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void mtsIntuitiveResearchKitControlTypes::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<mtsIntuitiveResearchKitControlTypes >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<mtsIntuitiveResearchKitControlTypes >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitControlTypes & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitControlTypes & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void mtsIntuitiveResearchKitControlTypes::Copy(const mtsIntuitiveResearchKitControlTypes & CMN_UNUSED(source__cdg)) {
}
void mtsIntuitiveResearchKitControlTypes::SerializeBinary(std::ostream & CMN_UNUSED(outputStream__cdg)) const CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitControlTypes::DeSerializeBinary(std::istream & CMN_UNUSED(inputStream__cdg),
                                            const cmnDataFormat & CMN_UNUSED(localFormat),
                                            const cmnDataFormat & CMN_UNUSED(remoteFormat)) CISST_THROW(std::runtime_error) {
}
void mtsIntuitiveResearchKitControlTypes::SerializeText(std::ostream & CMN_UNUSED(outputStream__cdg), const char CMN_UNUSED(delimiter__cdg)) const CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitControlTypes::SerializeDescription(const char CMN_UNUSED(delimiter__cdg), const std::string & CMN_UNUSED(userDescription__cdg)) const {
    std::stringstream description__cdg;
    return description__cdg.str();
}
void mtsIntuitiveResearchKitControlTypes::DeSerializeText(std::istream & CMN_UNUSED(inputStream__cdg),
                                          const char CMN_UNUSED(delimiter__cdg)) CISST_THROW(std::runtime_error) {
}
std::string mtsIntuitiveResearchKitControlTypes::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "mtsIntuitiveResearchKitControlTypes" << std::endl;
    return description__cdg.str();
}
bool mtsIntuitiveResearchKitControlTypes::ScalarNumberIsFixed(void) const {
    return true
    ;
}
size_t mtsIntuitiveResearchKitControlTypes::ScalarNumber(void) const {
    return 0
    ;
}
std::string mtsIntuitiveResearchKitControlTypes::ScalarDescription(const size_t CMN_UNUSED(index_cdg), const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    cmnThrow(std::out_of_range("cmnDataScalarDescription: mtsIntuitiveResearchKitControlTypes index out of range"));
    return "";
}
double mtsIntuitiveResearchKitControlTypes::Scalar(const size_t CMN_UNUSED(index_cdg)) const CISST_THROW(std::out_of_range) {
    cmnThrow(std::out_of_range("cmnDataScalar: mtsIntuitiveResearchKitControlTypes index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<mtsIntuitiveResearchKitControlTypes >::SerializeText(const mtsIntuitiveResearchKitControlTypes & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitControlTypes::SerializeTextJSON(Json::Value & CMN_UNUSED(jsonValue)) const {
}
template<>
void cmnDataJSON<mtsIntuitiveResearchKitControlTypes >::DeSerializeText(mtsIntuitiveResearchKitControlTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void mtsIntuitiveResearchKitControlTypes::DeSerializeTextJSON(const Json::Value & CMN_UNUSED(jsonValue)) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
}
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitControlTypes_ControlSpace(const mtsIntuitiveResearchKitControlTypes::ControlSpace & data) {
    switch (data) {
        case mtsIntuitiveResearchKitControlTypes::UNDEFINED_SPACE:
            return "UNDEFINED_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::ACTUATOR_SPACE:
            return "ACTUATOR_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::JOINT_SPACE:
            return "JOINT_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::CARTESIAN_SPACE:
            return "CARTESIAN_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::USER_SPACE:
            return "USER_SPACE";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitControlTypes::ControlSpace";
            break;
    }
}

std::string mtsIntuitiveResearchKitControlTypes::ControlSpaceToString(const mtsIntuitiveResearchKitControlTypes::ControlSpace & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitControlTypes::UNDEFINED_SPACE:
            return "UNDEFINED_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::ACTUATOR_SPACE:
            return "ACTUATOR_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::JOINT_SPACE:
            return "JOINT_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::CARTESIAN_SPACE:
            return "CARTESIAN_SPACE";
            break;
        case mtsIntuitiveResearchKitControlTypes::USER_SPACE:
            return "USER_SPACE";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitControlTypes::ControlSpaceToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitControlTypes::ControlSpace mtsIntuitiveResearchKitControlTypes::ControlSpaceFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED_SPACE") {
        return mtsIntuitiveResearchKitControlTypes::UNDEFINED_SPACE;
    };
    if (value == "ACTUATOR_SPACE") {
        return mtsIntuitiveResearchKitControlTypes::ACTUATOR_SPACE;
    };
    if (value == "JOINT_SPACE") {
        return mtsIntuitiveResearchKitControlTypes::JOINT_SPACE;
    };
    if (value == "CARTESIAN_SPACE") {
        return mtsIntuitiveResearchKitControlTypes::CARTESIAN_SPACE;
    };
    if (value == "USER_SPACE") {
        return mtsIntuitiveResearchKitControlTypes::USER_SPACE;
    };
    std::string message = "mtsIntuitiveResearchKitControlTypes::ControlSpaceFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = ControlSpaceVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitControlTypes::ControlSpace >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitControlTypes::ControlSpaceVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED_SPACE));
        vectorInt.push_back(static_cast<int>(ACTUATOR_SPACE));
        vectorInt.push_back(static_cast<int>(JOINT_SPACE));
        vectorInt.push_back(static_cast<int>(CARTESIAN_SPACE));
        vectorInt.push_back(static_cast<int>(USER_SPACE));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitControlTypes::ControlSpaceVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED_SPACE");
        vectorString.push_back("ACTUATOR_SPACE");
        vectorString.push_back("JOINT_SPACE");
        vectorString.push_back("CARTESIAN_SPACE");
        vectorString.push_back("USER_SPACE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(mtsIntuitiveResearchKitControlTypes::ControlSpace, mtsIntuitiveResearchKitControlTypes::ControlSpaceToString, mtsIntuitiveResearchKitControlTypes::ControlSpaceFromString);
#endif // CISST_HAS_JSON
std::string cmnDataHumanReadable_mtsIntuitiveResearchKitControlTypes_ControlMode(const mtsIntuitiveResearchKitControlTypes::ControlMode & data) {
    switch (data) {
        case mtsIntuitiveResearchKitControlTypes::UNDEFINED_MODE:
            return "UNDEFINED_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::POSITION_MODE:
            return "POSITION_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::TRAJECTORY_MODE:
            return "TRAJECTORY_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::VELOCITY_MODE:
            return "VELOCITY_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::EFFORT_MODE:
            return "EFFORT_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::USER_MODE:
            return "USER_MODE";
            break;
        default: return "undefined enum mtsIntuitiveResearchKitControlTypes::ControlMode";
            break;
    }
}

std::string mtsIntuitiveResearchKitControlTypes::ControlModeToString(const mtsIntuitiveResearchKitControlTypes::ControlMode & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case mtsIntuitiveResearchKitControlTypes::UNDEFINED_MODE:
            return "UNDEFINED_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::POSITION_MODE:
            return "POSITION_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::TRAJECTORY_MODE:
            return "TRAJECTORY_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::VELOCITY_MODE:
            return "VELOCITY_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::EFFORT_MODE:
            return "EFFORT_MODE";
            break;
        case mtsIntuitiveResearchKitControlTypes::USER_MODE:
            return "USER_MODE";
            break;
        default:
            break;
    }
    cmnThrow("mtsIntuitiveResearchKitControlTypes::ControlModeToString called with invalid enum");
    return "";
}

mtsIntuitiveResearchKitControlTypes::ControlMode mtsIntuitiveResearchKitControlTypes::ControlModeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED_MODE") {
        return mtsIntuitiveResearchKitControlTypes::UNDEFINED_MODE;
    };
    if (value == "POSITION_MODE") {
        return mtsIntuitiveResearchKitControlTypes::POSITION_MODE;
    };
    if (value == "TRAJECTORY_MODE") {
        return mtsIntuitiveResearchKitControlTypes::TRAJECTORY_MODE;
    };
    if (value == "VELOCITY_MODE") {
        return mtsIntuitiveResearchKitControlTypes::VELOCITY_MODE;
    };
    if (value == "EFFORT_MODE") {
        return mtsIntuitiveResearchKitControlTypes::EFFORT_MODE;
    };
    if (value == "USER_MODE") {
        return mtsIntuitiveResearchKitControlTypes::USER_MODE;
    };
    std::string message = "mtsIntuitiveResearchKitControlTypes::ControlModeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = ControlModeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<mtsIntuitiveResearchKitControlTypes::ControlMode >(0);
}

const std::vector<int> & mtsIntuitiveResearchKitControlTypes::ControlModeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED_MODE));
        vectorInt.push_back(static_cast<int>(POSITION_MODE));
        vectorInt.push_back(static_cast<int>(TRAJECTORY_MODE));
        vectorInt.push_back(static_cast<int>(VELOCITY_MODE));
        vectorInt.push_back(static_cast<int>(EFFORT_MODE));
        vectorInt.push_back(static_cast<int>(USER_MODE));
    }
    return vectorInt;
}

const std::vector<std::string> & mtsIntuitiveResearchKitControlTypes::ControlModeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED_MODE");
        vectorString.push_back("POSITION_MODE");
        vectorString.push_back("TRAJECTORY_MODE");
        vectorString.push_back("VELOCITY_MODE");
        vectorString.push_back("EFFORT_MODE");
        vectorString.push_back("USER_MODE");
    }
    return vectorString;
}

#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(mtsIntuitiveResearchKitControlTypes::ControlMode, mtsIntuitiveResearchKitControlTypes::ControlModeToString, mtsIntuitiveResearchKitControlTypes::ControlModeFromString);
#endif // CISST_HAS_JSON

