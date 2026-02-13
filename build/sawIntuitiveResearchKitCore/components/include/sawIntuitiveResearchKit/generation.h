// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/generation.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_generation_h
#define _sawIntuitiveResearchKit_generation_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */


/* source line: 1 */
/* source line: 4 */

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKit.h>

/* source line: 8 */
namespace dvrk {
enum generation {GENERATION_UNDEFINED = 0, Classic, Si };
std::string generationToString(const generation & value) CISST_THROW(std::runtime_error);
generation generationFromString(const std::string & value) CISST_THROW(std::runtime_error);
const std::vector<int> & generationVectorInt(void);
const std::vector<std::string> & generationVectorString(void);
}
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk::generation, int, dvrk::generationToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(dvrk::generation);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_generation_h
