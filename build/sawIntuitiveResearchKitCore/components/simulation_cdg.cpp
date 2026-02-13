// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/simulation.cdg

#include <sawIntuitiveResearchKit/simulation.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */


namespace dvrk {
std::string cmnDataHumanReadable__simulation(const simulation & data) {
    switch (data) {
        case SIMULATION_NONE:
            return "Not simulated";
            break;
        case SIMULATION_KINEMATIC:
            return "Kinematic simulation (RViz)";
            break;
        case SIMULATION_DYNAMIC:
            return "Dynamic simulation (AMBF, Gazebo...)";
            break;
        default: return "undefined enum simulation";
            break;
    }
}

std::string simulationToString(const simulation & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case SIMULATION_NONE:
            return "NONE";
            break;
        case SIMULATION_KINEMATIC:
            return "KINEMATIC";
            break;
        case SIMULATION_DYNAMIC:
            return "DYNAMIC";
            break;
        default:
            break;
    }
    cmnThrow("simulationToString called with invalid enum");
    return "";
}

simulation simulationFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "NONE") {
        return SIMULATION_NONE;
    };
    if (value == "KINEMATIC") {
        return SIMULATION_KINEMATIC;
    };
    if (value == "DYNAMIC") {
        return SIMULATION_DYNAMIC;
    };
    std::string message = "simulationFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = simulationVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<simulation >(0);
}

const std::vector<int> & simulationVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(SIMULATION_NONE));
        vectorInt.push_back(static_cast<int>(SIMULATION_KINEMATIC));
        vectorInt.push_back(static_cast<int>(SIMULATION_DYNAMIC));
    }
    return vectorInt;
}

const std::vector<std::string> & simulationVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("NONE");
        vectorString.push_back("KINEMATIC");
        vectorString.push_back("DYNAMIC");
    }
    return vectorString;
}

}
#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(dvrk::simulation, dvrk::simulationToString, dvrk::simulationFromString);
#endif // CISST_HAS_JSON

