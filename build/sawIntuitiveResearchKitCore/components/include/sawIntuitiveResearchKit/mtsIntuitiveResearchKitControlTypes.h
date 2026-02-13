// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/mtsIntuitiveResearchKitControlTypes.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_mtsIntuitiveResearchKitControlTypes_h
#define _sawIntuitiveResearchKit_mtsIntuitiveResearchKitControlTypes_h

#include <cisstCommon/cmnDataFunctions.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#if CISST_HAS_JSON
#include <cisstCommon/cmnDataFunctionsJSON.h>
#endif // CISST_HAS_JSON

/* source line: 1 */



// for mts-proxy 
#include <cisstCommon/cmnClassServices.h>
#include <cisstCommon/cmnClassRegisterMacros.h>
#include <cisstMultiTask/mtsGenericObjectProxy.h>

/* source line: 1 */
/* source line: 4 */

// Always include last
#include <sawIntuitiveResearchKit/sawIntuitiveResearchKitExport.h>

/* source line: 9 */
class  mtsIntuitiveResearchKitControlTypes
{
 /* default constructors and destructors. */
 public:
    mtsIntuitiveResearchKitControlTypes(void);
    mtsIntuitiveResearchKitControlTypes(const mtsIntuitiveResearchKitControlTypes & other);
    mtsIntuitiveResearchKitControlTypes & operator = (const mtsIntuitiveResearchKitControlTypes & other);
    ~mtsIntuitiveResearchKitControlTypes();

/* source line: 12 */
public:
    enum ControlSpace {UNDEFINED_SPACE, ACTUATOR_SPACE, JOINT_SPACE, CARTESIAN_SPACE, USER_SPACE };
static std::string ControlSpaceToString(const ControlSpace & value) CISST_THROW(std::runtime_error);
static ControlSpace ControlSpaceFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & ControlSpaceVectorInt(void);
static const std::vector<std::string> & ControlSpaceVectorString(void);
/* source line: 33 */
public:
    enum ControlMode {UNDEFINED_MODE, POSITION_MODE, TRAJECTORY_MODE, VELOCITY_MODE, EFFORT_MODE, USER_MODE };
static std::string ControlModeToString(const ControlMode & value) CISST_THROW(std::runtime_error);
static ControlMode ControlModeFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & ControlModeVectorInt(void);
static const std::vector<std::string> & ControlModeVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const mtsIntuitiveResearchKitControlTypes & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const;
    size_t ScalarNumber(void) const;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range);
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range);
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

}; // mtsIntuitiveResearchKitControlTypes

// mts-proxy set to true
typedef mtsGenericObjectProxy<mtsIntuitiveResearchKitControlTypes> mtsIntuitiveResearchKitControlTypesProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(mtsIntuitiveResearchKitControlTypesProxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const mtsIntuitiveResearchKitControlTypes & object);
void  cmnDeSerializeRaw(std::istream & inputStream, mtsIntuitiveResearchKitControlTypes & placeHolder);
/* data functions */
template <> class cmnData<mtsIntuitiveResearchKitControlTypes > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef mtsIntuitiveResearchKitControlTypes DataType;
    static void Copy(DataType & data, const DataType & source) {
        data.Copy(source);
    }
    static std::string SerializeDescription(const DataType & data, const char delimiter, const std::string & userDescription) {
        return data.SerializeDescription(delimiter, userDescription);
    }
    static void SerializeBinary(const DataType & data, std::ostream & outputStream) CISST_THROW(std::runtime_error) {
        data.SerializeBinary(outputStream);
    }
    static void DeSerializeBinary(DataType & data, std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
        data.DeSerializeBinary(inputStream, localFormat, remoteFormat);
    }
    static void SerializeText(const DataType & data, std::ostream & outputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.SerializeText(outputStream, delimiter);
    }
    static void DeSerializeText(DataType & data, std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error) {
        data.DeSerializeText(inputStream, delimiter);
    }
    static std::string HumanReadable(const DataType & data) {
        return data.HumanReadable();
    }
    static bool ScalarNumberIsFixed(const DataType & data) {
        return data.ScalarNumberIsFixed();
    }
    static size_t ScalarNumber(const DataType & data) {
        return data.ScalarNumber();
    }
    static std::string ScalarDescription(const DataType & data, const size_t index, const std::string & userDescription = "") CISST_THROW(std::out_of_range) {
        return data.ScalarDescription(index, userDescription);
    }
    static double Scalar(const DataType & data, const size_t index) CISST_THROW(std::out_of_range) {
        return data.Scalar(index);
    }
};
inline std::ostream & operator << (std::ostream & outputStream, const mtsIntuitiveResearchKitControlTypes & data) {
    outputStream << cmnData<mtsIntuitiveResearchKitControlTypes >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<mtsIntuitiveResearchKitControlTypes >::SerializeText(const mtsIntuitiveResearchKitControlTypes & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<mtsIntuitiveResearchKitControlTypes >::DeSerializeText(mtsIntuitiveResearchKitControlTypes & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_mtsIntuitiveResearchKitControlTypes_ControlSpace(const mtsIntuitiveResearchKitControlTypes::ControlSpace & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitControlTypes::ControlSpace, int, cmnDataHumanReadable_mtsIntuitiveResearchKitControlTypes_ControlSpace);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitControlTypes::ControlSpace);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_mtsIntuitiveResearchKitControlTypes_ControlMode(const mtsIntuitiveResearchKitControlTypes::ControlMode & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(mtsIntuitiveResearchKitControlTypes::ControlMode, int, cmnDataHumanReadable_mtsIntuitiveResearchKitControlTypes_ControlMode);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(mtsIntuitiveResearchKitControlTypes::ControlMode);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_mtsIntuitiveResearchKitControlTypes_h
