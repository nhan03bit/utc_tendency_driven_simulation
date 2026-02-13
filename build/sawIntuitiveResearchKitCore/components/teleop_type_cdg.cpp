// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_type.cdg

#include <sawIntuitiveResearchKit/teleop_type.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */



namespace dvrk {
std::string cmnDataHumanReadable__teleop_PSM_type(const teleop_PSM_type & data) {
    switch (data) {
        case TELEOP_PSM_UNDEFINED:
            return "Undefined";
            break;
        case TELEOP_PSM:
            return "Native PSM teleoperation component";
            break;
        case TELEOP_PSM_DERIVED:
            return "Component derived from native PSM teleoperation";
            break;
        case TELEOP_PSM_GENERIC:
            return "Generic component with interfaces compatible with native teleoperation";
            break;
        default: return "undefined enum teleop_PSM_type";
            break;
    }
}

std::string teleop_PSM_typeToString(const teleop_PSM_type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case TELEOP_PSM_UNDEFINED:
            return "TELEOP_PSM_UNDEFINED";
            break;
        case TELEOP_PSM:
            return "TELEOP_PSM";
            break;
        case TELEOP_PSM_DERIVED:
            return "TELEOP_PSM_DERIVED";
            break;
        case TELEOP_PSM_GENERIC:
            return "TELEOP_PSM_GENERIC";
            break;
        default:
            break;
    }
    cmnThrow("teleop_PSM_typeToString called with invalid enum");
    return "";
}

teleop_PSM_type teleop_PSM_typeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "TELEOP_PSM_UNDEFINED") {
        return TELEOP_PSM_UNDEFINED;
    };
    if (value == "TELEOP_PSM") {
        return TELEOP_PSM;
    };
    if (value == "TELEOP_PSM_DERIVED") {
        return TELEOP_PSM_DERIVED;
    };
    if (value == "TELEOP_PSM_GENERIC") {
        return TELEOP_PSM_GENERIC;
    };
    std::string message = "teleop_PSM_typeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = teleop_PSM_typeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<teleop_PSM_type >(0);
}

const std::vector<int> & teleop_PSM_typeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(TELEOP_PSM_UNDEFINED));
        vectorInt.push_back(static_cast<int>(TELEOP_PSM));
        vectorInt.push_back(static_cast<int>(TELEOP_PSM_DERIVED));
        vectorInt.push_back(static_cast<int>(TELEOP_PSM_GENERIC));
    }
    return vectorInt;
}

const std::vector<std::string> & teleop_PSM_typeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("TELEOP_PSM_UNDEFINED");
        vectorString.push_back("TELEOP_PSM");
        vectorString.push_back("TELEOP_PSM_DERIVED");
        vectorString.push_back("TELEOP_PSM_GENERIC");
    }
    return vectorString;
}

}
#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(dvrk::teleop_PSM_type, dvrk::teleop_PSM_typeToString, dvrk::teleop_PSM_typeFromString);
#endif // CISST_HAS_JSON

namespace dvrk {
std::string cmnDataHumanReadable__teleop_ECM_type(const teleop_ECM_type & data) {
    switch (data) {
        case TELEOP_ECM_UNDEFINED:
            return "Undefined";
            break;
        case TELEOP_ECM:
            return "Native ECM teleoperation component";
            break;
        case TELEOP_ECM_DERIVED:
            return "Component derived from native ECM teleoperation";
            break;
        case TELEOP_ECM_GENERIC:
            return "Generic component with interfaces compatible with native teleoperation";
            break;
        default: return "undefined enum teleop_ECM_type";
            break;
    }
}

std::string teleop_ECM_typeToString(const teleop_ECM_type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case TELEOP_ECM_UNDEFINED:
            return "TELEOP_ECM_UNDEFINED";
            break;
        case TELEOP_ECM:
            return "TELEOP_ECM";
            break;
        case TELEOP_ECM_DERIVED:
            return "TELEOP_ECM_DERIVED";
            break;
        case TELEOP_ECM_GENERIC:
            return "TELEOP_ECM_GENERIC";
            break;
        default:
            break;
    }
    cmnThrow("teleop_ECM_typeToString called with invalid enum");
    return "";
}

teleop_ECM_type teleop_ECM_typeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "TELEOP_ECM_UNDEFINED") {
        return TELEOP_ECM_UNDEFINED;
    };
    if (value == "TELEOP_ECM") {
        return TELEOP_ECM;
    };
    if (value == "TELEOP_ECM_DERIVED") {
        return TELEOP_ECM_DERIVED;
    };
    if (value == "TELEOP_ECM_GENERIC") {
        return TELEOP_ECM_GENERIC;
    };
    std::string message = "teleop_ECM_typeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = teleop_ECM_typeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<teleop_ECM_type >(0);
}

const std::vector<int> & teleop_ECM_typeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(TELEOP_ECM_UNDEFINED));
        vectorInt.push_back(static_cast<int>(TELEOP_ECM));
        vectorInt.push_back(static_cast<int>(TELEOP_ECM_DERIVED));
        vectorInt.push_back(static_cast<int>(TELEOP_ECM_GENERIC));
    }
    return vectorInt;
}

const std::vector<std::string> & teleop_ECM_typeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("TELEOP_ECM_UNDEFINED");
        vectorString.push_back("TELEOP_ECM");
        vectorString.push_back("TELEOP_ECM_DERIVED");
        vectorString.push_back("TELEOP_ECM_GENERIC");
    }
    return vectorString;
}

}
#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(dvrk::teleop_ECM_type, dvrk::teleop_ECM_typeToString, dvrk::teleop_ECM_typeFromString);
#endif // CISST_HAS_JSON

