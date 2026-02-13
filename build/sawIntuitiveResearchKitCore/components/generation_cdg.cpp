// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/generation.cdg

#include <sawIntuitiveResearchKit/generation.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */


namespace dvrk {
std::string cmnDataHumanReadable__generation(const generation & data) {
    switch (data) {
        case GENERATION_UNDEFINED:
            return "Undefined";
            break;
        case Classic:
            return "Classic";
            break;
        case Si:
            return "Si";
            break;
        default: return "undefined enum generation";
            break;
    }
}

std::string generationToString(const generation & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case GENERATION_UNDEFINED:
            return "GENERATION_UNDEFINED";
            break;
        case Classic:
            return "Classic";
            break;
        case Si:
            return "Si";
            break;
        default:
            break;
    }
    cmnThrow("generationToString called with invalid enum");
    return "";
}

generation generationFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "GENERATION_UNDEFINED") {
        return GENERATION_UNDEFINED;
    };
    if (value == "Classic") {
        return Classic;
    };
    if (value == "Si") {
        return Si;
    };
    std::string message = "generationFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = generationVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<generation >(0);
}

const std::vector<int> & generationVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(GENERATION_UNDEFINED));
        vectorInt.push_back(static_cast<int>(Classic));
        vectorInt.push_back(static_cast<int>(Si));
    }
    return vectorInt;
}

const std::vector<std::string> & generationVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("GENERATION_UNDEFINED");
        vectorString.push_back("Classic");
        vectorString.push_back("Si");
    }
    return vectorString;
}

}
#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(dvrk::generation, dvrk::generationToString, dvrk::generationFromString);
#endif // CISST_HAS_JSON

