// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawRobotIO1394/core/components/code/osaConfiguration1394.cdg

#pragma once
#ifndef _sawRobotIO1394_osaConfiguration1394_h
#define _sawRobotIO1394_osaConfiguration1394_h

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

#include <set>
#include <memory>
#include <cisstCommon/cmnUnits.h>
#include <cisstCommon/cmnJointType.h>
#include <cisstVector/vctDynamicMatrixTypes.h>
#include <cisstParameterTypes/prmActuatorJointCoupling.h>
#include <sawRobotIO1394/sawRobotIO1394Revision.h>
#include <sawRobotIO1394/sawRobotIO1394Export.h>

class AmpIO;

namespace sawRobotIO1394 {
    const size_t MAX_BOARDS = 16;
    const size_t MAX_AXES = 10;
} // namespace sawRobotIO1394


/* source line: 24 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaLinearFunction
{
 /* default constructors and destructors. */
 public:
    osaLinearFunction(void);
    osaLinearFunction(const osaLinearFunction & other);
    osaLinearFunction & operator = (const osaLinearFunction & other);
    ~osaLinearFunction();

/* source line: 28 */
 public:
    double scale; // scale
/* source line: 34 */
 public:
    double offset; // offset
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaLinearFunction & source);
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

}; // osaLinearFunction
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaLinearFunction> sawRobotIO1394_osaLinearFunctionProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaLinearFunctionProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLinearFunction & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaLinearFunction > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaLinearFunction DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaLinearFunction & data) {
    outputStream << cmnData<sawRobotIO1394::osaLinearFunction >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLinearFunction >::SerializeText(const sawRobotIO1394::osaLinearFunction & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLinearFunction >::DeSerializeText(sawRobotIO1394::osaLinearFunction & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 42 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaLimits
{
 /* default constructors and destructors. */
 public:
    osaLimits(void);
    osaLimits(const osaLimits & other);
    osaLimits & operator = (const osaLimits & other);
    ~osaLimits();

/* source line: 46 */
 public:
    double lower; // lower
/* source line: 51 */
 public:
    double upper; // upper
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaLimits & source);
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

}; // osaLimits
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaLimits> sawRobotIO1394_osaLimitsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaLimitsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaLimits & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaLimits & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaLimits > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaLimits DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaLimits & data) {
    outputStream << cmnData<sawRobotIO1394::osaLimits >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLimits >::SerializeText(const sawRobotIO1394::osaLimits & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaLimits >::DeSerializeText(sawRobotIO1394::osaLimits & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 58 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDrive1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDrive1394Configuration(void);
    osaDrive1394Configuration(const osaDrive1394Configuration & other);
    osaDrive1394Configuration & operator = (const osaDrive1394Configuration & other);
    ~osaDrive1394Configuration();

/* source line: 62 */
 public:
    osaLinearFunction effort_to_current; // effort_to_current
/* source line: 68 */
 public:
    osaLinearFunction current_to_bits; // current_to_bits
/* source line: 73 */
 public:
    osaLinearFunction bits_to_current; // bits_to_current
/* source line: 78 */
 public:
    double maximum_current; // maximum_current
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDrive1394Configuration & source);
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

}; // osaDrive1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDrive1394Configuration> sawRobotIO1394_osaDrive1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDrive1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDrive1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDrive1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDrive1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDrive1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDrive1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::SerializeText(const sawRobotIO1394::osaDrive1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDrive1394Configuration >::DeSerializeText(sawRobotIO1394::osaDrive1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 86 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaEncoder1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaEncoder1394Configuration(void);
    osaEncoder1394Configuration(const osaEncoder1394Configuration & other);
    osaEncoder1394Configuration & operator = (const osaEncoder1394Configuration & other);
    ~osaEncoder1394Configuration();

/* source line: 90 */
public:
    enum velocity_source_t {FIRMWARE, SOFTWARE };
static std::string velocity_source_tToString(const velocity_source_t & value) CISST_THROW(std::runtime_error);
static velocity_source_t velocity_source_tFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & velocity_source_tVectorInt(void);
static const std::vector<std::string> & velocity_source_tVectorString(void);
/* source line: 101 */
 public:
    osaLinearFunction bits_to_position; // bits_to_position
/* source line: 106 */
 public:
    osaLimits position_limits_soft; // position_limits_soft
/* source line: 111 */
 public:
    osaEncoder1394Configuration::velocity_source_t velocity_source; // velocity_source
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaEncoder1394Configuration & source);
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

}; // osaEncoder1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaEncoder1394Configuration> sawRobotIO1394_osaEncoder1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaEncoder1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaEncoder1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaEncoder1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaEncoder1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaEncoder1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaEncoder1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::SerializeText(const sawRobotIO1394::osaEncoder1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaEncoder1394Configuration >::DeSerializeText(sawRobotIO1394::osaEncoder1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_sawRobotIO1394__osaEncoder1394Configuration_velocity_source_t(const sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t, int, cmnDataHumanReadable_sawRobotIO1394__osaEncoder1394Configuration_velocity_source_t);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(sawRobotIO1394::osaEncoder1394Configuration::velocity_source_t);
#endif // CISST_HAS_JSON

/* source line: 118 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPotentiometer1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPotentiometer1394Configuration(void);
    osaPotentiometer1394Configuration(const osaPotentiometer1394Configuration & other);
    osaPotentiometer1394Configuration & operator = (const osaPotentiometer1394Configuration & other);
    ~osaPotentiometer1394Configuration();

/* source line: 122 */
 public:
    osaLinearFunction bits_to_voltage; // bits_to_voltage
/* source line: 127 */
 public:
    osaLinearFunction voltage_to_position; // voltage_to_position
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPotentiometer1394Configuration & source);
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

}; // osaPotentiometer1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPotentiometer1394Configuration> sawRobotIO1394_osaPotentiometer1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPotentiometer1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotentiometer1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotentiometer1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPotentiometer1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPotentiometer1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPotentiometer1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPotentiometer1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotentiometer1394Configuration >::SerializeText(const sawRobotIO1394::osaPotentiometer1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotentiometer1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotentiometer1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 135 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaBrake1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaBrake1394Configuration(void);
    osaBrake1394Configuration(const osaBrake1394Configuration & other);
    osaBrake1394Configuration & operator = (const osaBrake1394Configuration & other);
    ~osaBrake1394Configuration();

/* source line: 139 */
 public:
    int board_id; // board_id
/* source line: 144 */
 public:
    int axis_id; // axis_id
/* source line: 150 */
 public:
    osaDrive1394Configuration drive; // drive
/* source line: 155 */
 public:
    double release_current; // release_current
/* source line: 160 */
 public:
    double release_time; // release_time
/* source line: 165 */
 public:
    double released_current; // released_current
/* source line: 170 */
 public:
    double engaged_current; // engaged_current
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaBrake1394Configuration & source);
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

}; // osaBrake1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaBrake1394Configuration> sawRobotIO1394_osaBrake1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaBrake1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrake1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrake1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaBrake1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaBrake1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaBrake1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaBrake1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrake1394Configuration >::SerializeText(const sawRobotIO1394::osaBrake1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrake1394Configuration >::DeSerializeText(sawRobotIO1394::osaBrake1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 177 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaActuator1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaActuator1394Configuration(void);
    osaActuator1394Configuration(const osaActuator1394Configuration & other);
    osaActuator1394Configuration & operator = (const osaActuator1394Configuration & other);
    ~osaActuator1394Configuration();

/* source line: 181 */
 public:
    int board_id; // board_id
/* source line: 186 */
 public:
    int axis_id; // axis_id
/* source line: 192 */
 public:
    cmnJointType joint_type; // joint_type
/* source line: 198 */
 public:
    osaDrive1394Configuration drive; // drive
/* source line: 203 */
 public:
    osaEncoder1394Configuration encoder; // encoder
/* source line: 209 */
 public:
    osaPotentiometer1394Configuration potentiometer; // potentiometer
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaActuator1394Configuration & source);
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

}; // osaActuator1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaActuator1394Configuration> sawRobotIO1394_osaActuator1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaActuator1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuator1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaActuator1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaActuator1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaActuator1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaActuator1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::SerializeText(const sawRobotIO1394::osaActuator1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuator1394Configuration >::DeSerializeText(sawRobotIO1394::osaActuator1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 217 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPotentiometerTolerance1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPotentiometerTolerance1394Configuration(void);
    osaPotentiometerTolerance1394Configuration(const osaPotentiometerTolerance1394Configuration & other);
    osaPotentiometerTolerance1394Configuration & operator = (const osaPotentiometerTolerance1394Configuration & other);
    ~osaPotentiometerTolerance1394Configuration();

/* source line: 221 */
 public:
    int axis_id; // axis_id
/* source line: 227 */
 public:
    double distance; // distance
/* source line: 232 */
 public:
    double latency; // latency
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPotentiometerTolerance1394Configuration & source);
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

}; // osaPotentiometerTolerance1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPotentiometerTolerance1394Configuration> sawRobotIO1394_osaPotentiometerTolerance1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPotentiometerTolerance1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotentiometerTolerance1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotentiometerTolerance1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPotentiometerTolerance1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPotentiometerTolerance1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPotentiometerTolerance1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::SerializeText(const sawRobotIO1394::osaPotentiometerTolerance1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotentiometerTolerance1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotentiometerTolerance1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 239 */
class  osa1394
{
 /* default constructors and destructors. */
 public:
    osa1394(void);
    osa1394(const osa1394 & other);
    osa1394 & operator = (const osa1394 & other);
    ~osa1394();

/* source line: 241 */
public:
    enum hardware_t {HARDWARE_UNDEFINED, QLA1, DQLA, dRA1 };
static std::string hardware_tToString(const hardware_t & value) CISST_THROW(std::runtime_error);
static hardware_t hardware_tFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & hardware_tVectorInt(void);
static const std::vector<std::string> & hardware_tVectorString(void);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osa1394 & source);
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

}; // osa1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<osa1394> osa1394Proxy;
CMN_DECLARE_SERVICES_INSTANTIATION(osa1394Proxy);

/* default functions */
void  cmnSerializeRaw(std::ostream & outputStream, const osa1394 & object);
void  cmnDeSerializeRaw(std::istream & inputStream, osa1394 & placeHolder);
/* data functions */
template <> class cmnData<osa1394 > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef osa1394 DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const osa1394 & data) {
    outputStream << cmnData<osa1394 >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void  cmnDataJSON<osa1394 >::SerializeText(const osa1394 & data, Json::Value & jsonValue);
template <> void  cmnDataJSON<osa1394 >::DeSerializeText(osa1394 & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string  cmnDataHumanReadable_osa1394_hardware_t(const osa1394::hardware_t & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(osa1394::hardware_t, int, cmnDataHumanReadable_osa1394_hardware_t);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(osa1394::hardware_t);
#endif // CISST_HAS_JSON

/* source line: 262 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPotentiometers1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPotentiometers1394Configuration(void);
    osaPotentiometers1394Configuration(const osaPotentiometers1394Configuration & other);
    osaPotentiometers1394Configuration & operator = (const osaPotentiometers1394Configuration & other);
    ~osaPotentiometers1394Configuration();

/* source line: 266 */
public:
    enum potentiometer_type_t {UNDEFINED, NONE, ANALOG, DIGITAL };
static std::string potentiometer_type_tToString(const potentiometer_type_t & value) CISST_THROW(std::runtime_error);
static potentiometer_type_t potentiometer_type_tFromString(const std::string & value) CISST_THROW(std::runtime_error);
static const std::vector<int> & potentiometer_type_tVectorInt(void);
static const std::vector<std::string> & potentiometer_type_tVectorString(void);
/* source line: 285 */
 public:
    osaPotentiometers1394Configuration::potentiometer_type_t potentiometers_type; // potentiometers_type
/* source line: 290 */
 public:
    std::vector<osaPotentiometerTolerance1394Configuration> tolerances; // tolerances
/* source line: 296 */
 public:
    prmActuatorJointCoupling coupling; // Matrix to convert potentiometer to actuators. E.g. on dVRK MTMsm the potentiometers are mounted on the joints
/* source line: 303 */
 public:
    std::string lookup_table_file; // lookup_table_file
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPotentiometers1394Configuration & source);
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

}; // osaPotentiometers1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPotentiometers1394Configuration> sawRobotIO1394_osaPotentiometers1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPotentiometers1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPotentiometers1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPotentiometers1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPotentiometers1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPotentiometers1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPotentiometers1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPotentiometers1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotentiometers1394Configuration >::SerializeText(const sawRobotIO1394::osaPotentiometers1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPotentiometers1394Configuration >::DeSerializeText(sawRobotIO1394::osaPotentiometers1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON
std::string CISST_EXPORT cmnDataHumanReadable_sawRobotIO1394__osaPotentiometers1394Configuration_potentiometer_type_t(const sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t & data);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t, int, cmnDataHumanReadable_sawRobotIO1394__osaPotentiometers1394Configuration_potentiometer_type_t);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM(sawRobotIO1394::osaPotentiometers1394Configuration::potentiometer_type_t);
#endif // CISST_HAS_JSON

/* source line: 311 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaRobot1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaRobot1394Configuration(void);
    osaRobot1394Configuration(const osaRobot1394Configuration & other);
    osaRobot1394Configuration & operator = (const osaRobot1394Configuration & other);
    ~osaRobot1394Configuration();

/* source line: 316 */
 public:
    std::string name; // name
/* source line: 321 */
 public:
    osa1394::hardware_t hardware_version; // hardware_version
/* source line: 327 */
 public:
    std::string serial_number; // serial_number
/* source line: 332 */
 public:
    std::vector<std::string> path; // path
/* source line: 338 */
 public:
    bool only_IO; // only_IO
/* source line: 344 */
 public:
    bool has_encoder_preload; // has_encoder_preload
/* source line: 350 */
 public:
    size_t number_of_actuators; // number_of_actuators
/* source line: 355 */
 public:
    std::vector<osaActuator1394Configuration> actuators; // actuators
/* source line: 360 */
 public:
    size_t number_of_brakes; // number_of_brakes
/* source line: 365 */
 public:
    std::vector<osaBrake1394Configuration> brakes; // brakes
/* source line: 371 */
 public:
    osaPotentiometers1394Configuration potentiometers; // potentiometers
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaRobot1394Configuration & source);
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

}; // osaRobot1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaRobot1394Configuration> sawRobotIO1394_osaRobot1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaRobot1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaRobot1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaRobot1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaRobot1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaRobot1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaRobot1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::SerializeText(const sawRobotIO1394::osaRobot1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaRobot1394Configuration >::DeSerializeText(sawRobotIO1394::osaRobot1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 379 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDigitalInput1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDigitalInput1394Configuration(void);
    osaDigitalInput1394Configuration(const osaDigitalInput1394Configuration & other);
    osaDigitalInput1394Configuration & operator = (const osaDigitalInput1394Configuration & other);
    ~osaDigitalInput1394Configuration();

/* source line: 383 */
 public:
    std::string name; // name
/* source line: 388 */
 public:
    int board_id; // board_id
/* source line: 393 */
 public:
    int bit_id; // bit_id
/* source line: 398 */
 public:
    bool trigger_when_pressed; // trigger_when_pressed
/* source line: 403 */
 public:
    bool trigger_when_released; // trigger_when_released
/* source line: 408 */
 public:
    bool pressed_value; // pressed_value
/* source line: 413 */
 public:
    bool skip_first_run; // skip_first_run
/* source line: 419 */
 public:
    double debounce_time; // debounce_time
/* source line: 425 */
 public:
    double debounce_time_click; // debounce_time_click
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDigitalInput1394Configuration & source);
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

}; // osaDigitalInput1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDigitalInput1394Configuration> sawRobotIO1394_osaDigitalInput1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDigitalInput1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalInput1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDigitalInput1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDigitalInput1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDigitalInput1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDigitalInput1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalInput1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalInput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalInput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 433 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDigitalOutput1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDigitalOutput1394Configuration(void);
    osaDigitalOutput1394Configuration(const osaDigitalOutput1394Configuration & other);
    osaDigitalOutput1394Configuration & operator = (const osaDigitalOutput1394Configuration & other);
    ~osaDigitalOutput1394Configuration();

/* source line: 437 */
 public:
    std::string name; // name
/* source line: 442 */
 public:
    int board_id; // board_id
/* source line: 447 */
 public:
    int bit_id; // bit_id
/* source line: 452 */
 public:
    double high_duration; // high_duration
/* source line: 458 */
 public:
    double low_duration; // low_duration
/* source line: 464 */
 public:
    bool is_PWM; // is_PWM
/* source line: 470 */
 public:
    double PWM_frequency; // PWM_frequency
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDigitalOutput1394Configuration & source);
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

}; // osaDigitalOutput1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDigitalOutput1394Configuration> sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDigitalOutput1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDigitalOutput1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDigitalOutput1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDigitalOutput1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDigitalOutput1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::SerializeText(const sawRobotIO1394::osaDigitalOutput1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDigitalOutput1394Configuration >::DeSerializeText(sawRobotIO1394::osaDigitalOutput1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 478 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaDallasChip1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaDallasChip1394Configuration(void);
    osaDallasChip1394Configuration(const osaDallasChip1394Configuration & other);
    osaDallasChip1394Configuration & operator = (const osaDallasChip1394Configuration & other);
    ~osaDallasChip1394Configuration();

/* source line: 482 */
 public:
    std::string name; // name
/* source line: 487 */
 public:
    int board_id; // board_id
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaDallasChip1394Configuration & source);
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

}; // osaDallasChip1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaDallasChip1394Configuration> sawRobotIO1394_osaDallasChip1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaDallasChip1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaDallasChip1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaDallasChip1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaDallasChip1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaDallasChip1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaDallasChip1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::SerializeText(const sawRobotIO1394::osaDallasChip1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaDallasChip1394Configuration >::DeSerializeText(sawRobotIO1394::osaDallasChip1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 494 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaPort1394Configuration
{
 /* default constructors and destructors. */
 public:
    osaPort1394Configuration(void);
    osaPort1394Configuration(const osaPort1394Configuration & other);
    osaPort1394Configuration & operator = (const osaPort1394Configuration & other);
    ~osaPort1394Configuration();

/* source line: 498 */
 public:
    std::vector<osaRobot1394Configuration> robots; // robots
/* source line: 504 */
 public:
    std::vector<osaDigitalInput1394Configuration> digital_inputs; // digital_inputs
/* source line: 510 */
 public:
    std::vector<osaDigitalOutput1394Configuration> digital_outputs; // digital_outputs
/* source line: 516 */
 public:
    std::vector<osaDallasChip1394Configuration> dallas_chips; // dallas_chips
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaPort1394Configuration & source);
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

}; // osaPort1394Configuration
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaPort1394Configuration> sawRobotIO1394_osaPort1394ConfigurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaPort1394ConfigurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaPort1394Configuration & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaPort1394Configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaPort1394Configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaPort1394Configuration & data) {
    outputStream << cmnData<sawRobotIO1394::osaPort1394Configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::SerializeText(const sawRobotIO1394::osaPort1394Configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaPort1394Configuration >::DeSerializeText(sawRobotIO1394::osaPort1394Configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 524 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaActuatorMapping
{
 /* default constructors and destructors. */
 public:
    osaActuatorMapping(void);
    osaActuatorMapping(const osaActuatorMapping & other);
    osaActuatorMapping & operator = (const osaActuatorMapping & other);
    ~osaActuatorMapping();

/* source line: 528 */
 public:
    AmpIO * board; // board
/* source line: 535 */
 public:
    int board_id; // board_id
/* source line: 540 */
 public:
    int axis; // axis
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaActuatorMapping & source);
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

}; // osaActuatorMapping
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaActuatorMapping> sawRobotIO1394_osaActuatorMappingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaActuatorMappingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaActuatorMapping & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaActuatorMapping > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaActuatorMapping DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaActuatorMapping & data) {
    outputStream << cmnData<sawRobotIO1394::osaActuatorMapping >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::SerializeText(const sawRobotIO1394::osaActuatorMapping & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaActuatorMapping >::DeSerializeText(sawRobotIO1394::osaActuatorMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 547 */
namespace sawRobotIO1394 {
class CISST_EXPORT osaBrakeMapping
{
 /* default constructors and destructors. */
 public:
    osaBrakeMapping(void);
    osaBrakeMapping(const osaBrakeMapping & other);
    osaBrakeMapping & operator = (const osaBrakeMapping & other);
    ~osaBrakeMapping();

/* source line: 551 */
 public:
    AmpIO * board; // board
/* source line: 558 */
 public:
    int board_id; // board_id
/* source line: 563 */
 public:
    int axis; // axis
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const osaBrakeMapping & source);
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

}; // osaBrakeMapping
}; // end of namespace sawRobotIO1394

// mts-proxy set to true
typedef mtsGenericObjectProxy<sawRobotIO1394::osaBrakeMapping> sawRobotIO1394_osaBrakeMappingProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(sawRobotIO1394_osaBrakeMappingProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, sawRobotIO1394::osaBrakeMapping & placeHolder);
/* data functions */
template <> class cmnData<sawRobotIO1394::osaBrakeMapping > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef sawRobotIO1394::osaBrakeMapping DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const sawRobotIO1394::osaBrakeMapping & data) {
    outputStream << cmnData<sawRobotIO1394::osaBrakeMapping >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::SerializeText(const sawRobotIO1394::osaBrakeMapping & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<sawRobotIO1394::osaBrakeMapping >::DeSerializeText(sawRobotIO1394::osaBrakeMapping & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawRobotIO1394_osaConfiguration1394_h
