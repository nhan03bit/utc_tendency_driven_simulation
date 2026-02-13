// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_PSM_configuration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_teleop_PSM_configuration_h
#define _sawIntuitiveResearchKit_teleop_PSM_configuration_h

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

#include <json/json.h>
#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKit.h>

/* source line: 10 */
namespace dvrk {
class CISST_EXPORT teleop_PSM_configuration_gripper_scaling
{
 /* default constructors and destructors. */
 public:
    teleop_PSM_configuration_gripper_scaling(void);
    teleop_PSM_configuration_gripper_scaling(const teleop_PSM_configuration_gripper_scaling & other);
    teleop_PSM_configuration_gripper_scaling & operator = (const teleop_PSM_configuration_gripper_scaling & other);
    ~teleop_PSM_configuration_gripper_scaling();

/* source line: 15 */
 public:
    double zero; // zero
/* source line: 22 */
 public:
    double max; // max
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const teleop_PSM_configuration_gripper_scaling & source);
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

}; // teleop_PSM_configuration_gripper_scaling
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::teleop_PSM_configuration_gripper_scaling> dvrk_teleop_PSM_configuration_gripper_scalingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_teleop_PSM_configuration_gripper_scalingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_PSM_configuration_gripper_scaling & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_PSM_configuration_gripper_scaling & placeHolder);
/* data functions */
template <> class cmnData<dvrk::teleop_PSM_configuration_gripper_scaling > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::teleop_PSM_configuration_gripper_scaling DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::teleop_PSM_configuration_gripper_scaling & data) {
    outputStream << cmnData<dvrk::teleop_PSM_configuration_gripper_scaling >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::teleop_PSM_configuration_gripper_scaling >::SerializeText(const dvrk::teleop_PSM_configuration_gripper_scaling & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::teleop_PSM_configuration_gripper_scaling >::DeSerializeText(dvrk::teleop_PSM_configuration_gripper_scaling & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 31 */
namespace dvrk {
class CISST_EXPORT teleop_PSM_configuration
{
 /* default constructors and destructors. */
 public:
    teleop_PSM_configuration(void);
    teleop_PSM_configuration(const teleop_PSM_configuration & other);
    teleop_PSM_configuration & operator = (const teleop_PSM_configuration & other);
    ~teleop_PSM_configuration();

/* source line: 36 */
 public:
    bool align_MTM; // align_MTM
/* source line: 43 */
 public:
    bool rotation_locked; // rotation_locked
/* source line: 50 */
 public:
    bool translation_locked; // translation_locked
/* source line: 57 */
 public:
    double start_orientation_tolerance; // start_orientation_tolerance
/* source line: 64 */
 public:
    double orientation_tolerance_after_clutch; // orientation_tolerance_after_clutch
/* source line: 71 */
 public:
    double start_gripper_threshold; // start_gripper_threshold
/* source line: 78 */
 public:
    double start_roll_threshold; // start_roll_threshold
/* source line: 85 */
 public:
    bool ignore_jaw; // ignore_jaw
/* source line: 92 */
 public:
    double scale; // scale
/* source line: 99 */
 public:
    double jaw_rate; // jaw_rate
/* source line: 106 */
 public:
    double jaw_rate_after_clutch; // jaw_rate_after_clutch
/* source line: 113 */
 public:
    bool use_MTM_linear_velocity; // use_MTM_linear_velocity
/* source line: 120 */
 public:
    bool use_MTM_angular_velocity; // use_MTM_angular_velocity
/* source line: 127 */
 public:
    bool MTM_is_haptic; // MTM_is_haptic
/* source line: 134 */
 public:
    teleop_PSM_configuration_gripper_scaling gripper_scaling; // gripper_scaling
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const teleop_PSM_configuration & source);
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

}; // teleop_PSM_configuration
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::teleop_PSM_configuration> dvrk_teleop_PSM_configurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_teleop_PSM_configurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_PSM_configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_PSM_configuration & placeHolder);
/* data functions */
template <> class cmnData<dvrk::teleop_PSM_configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::teleop_PSM_configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::teleop_PSM_configuration & data) {
    outputStream << cmnData<dvrk::teleop_PSM_configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::teleop_PSM_configuration >::SerializeText(const dvrk::teleop_PSM_configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::teleop_PSM_configuration >::DeSerializeText(dvrk::teleop_PSM_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_teleop_PSM_configuration_h
