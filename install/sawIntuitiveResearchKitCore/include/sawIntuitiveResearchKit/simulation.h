// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/simulation.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_simulation_h
#define _sawIntuitiveResearchKit_simulation_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */


/* source line: 1 */
/* source line: 4 */

// Always include last
#include <sawIntuitiveResearchKit/sawIntuitiveResearchKitExport.h>

/* source line: 9 */
namespace dvrk {
enum simulation {SIMULATION_NONE = 0, SIMULATION_KINEMATIC, SIMULATION_DYNAMIC };
CISST_EXPORT std::string simulationToString(const simulation & value) CISST_THROW(std::runtime_error);
CISST_EXPORT simulation simulationFromString(const std::string & value) CISST_THROW(std::runtime_error);
CISST_EXPORT const std::vector<int> & simulationVectorInt(void);
CISST_EXPORT const std::vector<std::string> & simulationVectorString(void);
}
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk::simulation, int, dvrk::simulationToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(dvrk::simulation);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_simulation_h
