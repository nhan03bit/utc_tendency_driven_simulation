// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_type.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_teleop_type_h
#define _sawIntuitiveResearchKit_teleop_type_h

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
enum teleop_PSM_type {TELEOP_PSM_UNDEFINED = 0, TELEOP_PSM, TELEOP_PSM_DERIVED, TELEOP_PSM_GENERIC };
CISST_EXPORT std::string teleop_PSM_typeToString(const teleop_PSM_type & value) CISST_THROW(std::runtime_error);
CISST_EXPORT teleop_PSM_type teleop_PSM_typeFromString(const std::string & value) CISST_THROW(std::runtime_error);
CISST_EXPORT const std::vector<int> & teleop_PSM_typeVectorInt(void);
CISST_EXPORT const std::vector<std::string> & teleop_PSM_typeVectorString(void);
}
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk::teleop_PSM_type, int, dvrk::teleop_PSM_typeToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(dvrk::teleop_PSM_type);
#endif // CISST_HAS_JSON

/* source line: 33 */
namespace dvrk {
enum teleop_ECM_type {TELEOP_ECM_UNDEFINED = 0, TELEOP_ECM, TELEOP_ECM_DERIVED, TELEOP_ECM_GENERIC };
CISST_EXPORT std::string teleop_ECM_typeToString(const teleop_ECM_type & value) CISST_THROW(std::runtime_error);
CISST_EXPORT teleop_ECM_type teleop_ECM_typeFromString(const std::string & value) CISST_THROW(std::runtime_error);
CISST_EXPORT const std::vector<int> & teleop_ECM_typeVectorInt(void);
CISST_EXPORT const std::vector<std::string> & teleop_ECM_typeVectorString(void);
}
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk::teleop_ECM_type, int, dvrk::teleop_ECM_typeToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(dvrk::teleop_ECM_type);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_teleop_type_h
