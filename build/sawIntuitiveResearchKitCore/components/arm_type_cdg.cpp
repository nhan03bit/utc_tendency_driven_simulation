// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/arm_type.cdg

#include <sawIntuitiveResearchKit/arm_type.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */


namespace dvrk {
std::string cmnDataHumanReadable__arm_type(const arm_type & data) {
    switch (data) {
        case ARM_UNDEFINED:
            return "Undefined";
            break;
        case ECM:
            return "Native ECM";
            break;
        case MTM:
            return "Native MTM";
            break;
        case PSM:
            return "Native PSM";
            break;
        case ECM_DERIVED:
            return "ECM derived from native ECM";
            break;
        case MTM_DERIVED:
            return "MTM derived from native MTM";
            break;
        case PSM_DERIVED:
            return "PSM derived from native PSM";
            break;
        case ECM_GENERIC:
            return "Generic ECM";
            break;
        case MTM_GENERIC:
            return "Generic MTM";
            break;
        case PSM_GENERIC:
            return "Generic PSM";
            break;
        case SUJ_Classic:
            return "SUJ Classic";
            break;
        case SUJ_Si:
            return "SUJ Si";
            break;
        case SUJ_Fixed:
            return "SUJ Fixed";
            break;
        case FOCUS_CONTROLLER:
            return "Focus Controller (not implemented yet)";
            break;
        default: return "undefined enum arm_type";
            break;
    }
}

std::string arm_typeToString(const arm_type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case ARM_UNDEFINED:
            return "ARM_UNDEFINED";
            break;
        case ECM:
            return "ECM";
            break;
        case MTM:
            return "MTM";
            break;
        case PSM:
            return "PSM";
            break;
        case ECM_DERIVED:
            return "ECM_DERIVED";
            break;
        case MTM_DERIVED:
            return "MTM_DERIVED";
            break;
        case PSM_DERIVED:
            return "PSM_DERIVED";
            break;
        case ECM_GENERIC:
            return "ECM_GENERIC";
            break;
        case MTM_GENERIC:
            return "MTM_GENERIC";
            break;
        case PSM_GENERIC:
            return "PSM_GENERIC";
            break;
        case SUJ_Classic:
            return "SUJ_Classic";
            break;
        case SUJ_Si:
            return "SUJ_Si";
            break;
        case SUJ_Fixed:
            return "SUJ_Fixed";
            break;
        case FOCUS_CONTROLLER:
            return "FOCUS_CONTROLLER";
            break;
        default:
            break;
    }
    cmnThrow("arm_typeToString called with invalid enum");
    return "";
}

arm_type arm_typeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "ARM_UNDEFINED") {
        return ARM_UNDEFINED;
    };
    if (value == "ECM") {
        return ECM;
    };
    if (value == "MTM") {
        return MTM;
    };
    if (value == "PSM") {
        return PSM;
    };
    if (value == "ECM_DERIVED") {
        return ECM_DERIVED;
    };
    if (value == "MTM_DERIVED") {
        return MTM_DERIVED;
    };
    if (value == "PSM_DERIVED") {
        return PSM_DERIVED;
    };
    if (value == "ECM_GENERIC") {
        return ECM_GENERIC;
    };
    if (value == "MTM_GENERIC") {
        return MTM_GENERIC;
    };
    if (value == "PSM_GENERIC") {
        return PSM_GENERIC;
    };
    if (value == "SUJ_Classic") {
        return SUJ_Classic;
    };
    if (value == "SUJ_Si") {
        return SUJ_Si;
    };
    if (value == "SUJ_Fixed") {
        return SUJ_Fixed;
    };
    if (value == "FOCUS_CONTROLLER") {
        return FOCUS_CONTROLLER;
    };
    std::string message = "arm_typeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = arm_typeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<arm_type >(0);
}

const std::vector<int> & arm_typeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(ARM_UNDEFINED));
        vectorInt.push_back(static_cast<int>(ECM));
        vectorInt.push_back(static_cast<int>(MTM));
        vectorInt.push_back(static_cast<int>(PSM));
        vectorInt.push_back(static_cast<int>(ECM_DERIVED));
        vectorInt.push_back(static_cast<int>(MTM_DERIVED));
        vectorInt.push_back(static_cast<int>(PSM_DERIVED));
        vectorInt.push_back(static_cast<int>(ECM_GENERIC));
        vectorInt.push_back(static_cast<int>(MTM_GENERIC));
        vectorInt.push_back(static_cast<int>(PSM_GENERIC));
        vectorInt.push_back(static_cast<int>(SUJ_Classic));
        vectorInt.push_back(static_cast<int>(SUJ_Si));
        vectorInt.push_back(static_cast<int>(SUJ_Fixed));
        vectorInt.push_back(static_cast<int>(FOCUS_CONTROLLER));
    }
    return vectorInt;
}

const std::vector<std::string> & arm_typeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("ARM_UNDEFINED");
        vectorString.push_back("ECM");
        vectorString.push_back("MTM");
        vectorString.push_back("PSM");
        vectorString.push_back("ECM_DERIVED");
        vectorString.push_back("MTM_DERIVED");
        vectorString.push_back("PSM_DERIVED");
        vectorString.push_back("ECM_GENERIC");
        vectorString.push_back("MTM_GENERIC");
        vectorString.push_back("PSM_GENERIC");
        vectorString.push_back("SUJ_Classic");
        vectorString.push_back("SUJ_Si");
        vectorString.push_back("SUJ_Fixed");
        vectorString.push_back("FOCUS_CONTROLLER");
    }
    return vectorString;
}

}
#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(dvrk::arm_type, dvrk::arm_typeToString, dvrk::arm_typeFromString);
#endif // CISST_HAS_JSON

