// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_PSM_proxy_configuration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_teleop_PSM_proxy_configuration_h
#define _sawIntuitiveResearchKit_teleop_PSM_proxy_configuration_h

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
#include <sawIntuitiveResearchKit/terminal.h>
#include <sawIntuitiveResearchKit/teleop_type.h>

/* source line: 11 */
namespace dvrk {
class CISST_EXPORT teleop_PSM_proxy_configuration
{
 /* default constructors and destructors. */
 public:
    teleop_PSM_proxy_configuration(void);
    teleop_PSM_proxy_configuration(const teleop_PSM_proxy_configuration & other);
    teleop_PSM_proxy_configuration & operator = (const teleop_PSM_proxy_configuration & other);
    ~teleop_PSM_proxy_configuration();

/* source line: 16 */
 public:
    dvrk::teleop_PSM_type type; // type
/* source line: 23 */
 public:
    std::string MTM; // MTM
/* source line: 29 */
 public:
    std::string PSM; // PSM
/* source line: 35 */
 public:
    Json::Value configure_parameter; // configure_parameter
/* source line: 42 */
 public:
    double period; // period
/* source line: 49 */
 public:
    dvrk::terminal PSM_base_frame; // PSM_base_frame
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const teleop_PSM_proxy_configuration & source);
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

}; // teleop_PSM_proxy_configuration
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::teleop_PSM_proxy_configuration> dvrk_teleop_PSM_proxy_configurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_teleop_PSM_proxy_configurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_PSM_proxy_configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_PSM_proxy_configuration & placeHolder);
/* data functions */
template <> class cmnData<dvrk::teleop_PSM_proxy_configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::teleop_PSM_proxy_configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::teleop_PSM_proxy_configuration & data) {
    outputStream << cmnData<dvrk::teleop_PSM_proxy_configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::teleop_PSM_proxy_configuration >::SerializeText(const dvrk::teleop_PSM_proxy_configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::teleop_PSM_proxy_configuration >::DeSerializeText(dvrk::teleop_PSM_proxy_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_teleop_PSM_proxy_configuration_h
