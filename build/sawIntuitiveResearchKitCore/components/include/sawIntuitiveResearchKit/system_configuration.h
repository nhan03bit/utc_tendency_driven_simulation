// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/system_configuration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_system_configuration_h
#define _sawIntuitiveResearchKit_system_configuration_h

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
#include <sawIntuitiveResearchKit/IO_proxy_configuration.h>
#include <sawIntuitiveResearchKit/IO_configuration.h>
#include <sawIntuitiveResearchKit/arm_proxy_configuration.h>
#include <sawIntuitiveResearchKit/console_configuration.h>

/* source line: 12 */
namespace dvrk {
class CISST_EXPORT system_configuration_settings
{
 /* default constructors and destructors. */
 public:
    system_configuration_settings(void);
    system_configuration_settings(const system_configuration_settings & other);
    system_configuration_settings & operator = (const system_configuration_settings & other);
    ~system_configuration_settings();

/* source line: 17 */
 public:
    bool chatty; // chatty
/* source line: 24 */
 public:
    std::vector<std::string> path; // path
/* source line: 31 */
 public:
    double audio_volume; // audio_volume
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const system_configuration_settings & source);
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

}; // system_configuration_settings
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::system_configuration_settings> dvrk_system_configuration_settingsProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_system_configuration_settingsProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::system_configuration_settings & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::system_configuration_settings & placeHolder);
/* data functions */
template <> class cmnData<dvrk::system_configuration_settings > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::system_configuration_settings DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::system_configuration_settings & data) {
    outputStream << cmnData<dvrk::system_configuration_settings >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::system_configuration_settings >::SerializeText(const dvrk::system_configuration_settings & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::system_configuration_settings >::DeSerializeText(dvrk::system_configuration_settings & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 40 */
namespace dvrk {
class CISST_EXPORT system_configuration
{
 /* default constructors and destructors. */
 public:
    system_configuration(void);
    system_configuration(const system_configuration & other);
    system_configuration & operator = (const system_configuration & other);
    ~system_configuration();

/* source line: 45 */
 public:
    Json::Value component_manager; // component_manager
/* source line: 52 */
 public:
    std::vector<dvrk::IO_proxy_configuration> IOs; // IOs
/* source line: 59 */
 public:
    dvrk::IO_configuration ISI_focus_controller; // ISI_focus_controller
/* source line: 66 */
 public:
    std::vector<dvrk::arm_proxy_configuration> arms; // arms
/* source line: 73 */
 public:
    std::vector<dvrk::console_configuration> consoles; // consoles
/* source line: 80 */
 public:
    dvrk::system_configuration_settings settings; // settings
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const system_configuration & source);
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

}; // system_configuration
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::system_configuration> dvrk_system_configurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_system_configurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::system_configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::system_configuration & placeHolder);
/* data functions */
template <> class cmnData<dvrk::system_configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::system_configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::system_configuration & data) {
    outputStream << cmnData<dvrk::system_configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::system_configuration >::SerializeText(const dvrk::system_configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::system_configuration >::DeSerializeText(dvrk::system_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_system_configuration_h
