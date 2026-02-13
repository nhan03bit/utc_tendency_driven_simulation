// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/arm_type.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_arm_type_h
#define _sawIntuitiveResearchKit_arm_type_h

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
enum arm_type {ARM_UNDEFINED = 0, ECM, MTM, PSM, ECM_DERIVED, MTM_DERIVED, PSM_DERIVED, ECM_GENERIC, MTM_GENERIC, PSM_GENERIC, SUJ_Classic, SUJ_Si, SUJ_Fixed, FOCUS_CONTROLLER };
CISST_EXPORT std::string arm_typeToString(const arm_type & value) CISST_THROW(std::runtime_error);
CISST_EXPORT arm_type arm_typeFromString(const std::string & value) CISST_THROW(std::runtime_error);
CISST_EXPORT const std::vector<int> & arm_typeVectorInt(void);
CISST_EXPORT const std::vector<std::string> & arm_typeVectorString(void);
}
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk::arm_type, int, dvrk::arm_typeToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(dvrk::arm_type);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_arm_type_h
