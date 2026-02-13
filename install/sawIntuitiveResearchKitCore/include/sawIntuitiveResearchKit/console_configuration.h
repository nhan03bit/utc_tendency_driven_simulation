// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/console_configuration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_console_configuration_h
#define _sawIntuitiveResearchKit_console_configuration_h

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
#include <sawIntuitiveResearchKit/terminal.h>
#include <sawIntuitiveResearchKit/IO_configuration.h>
#include <sawIntuitiveResearchKit/teleop_ECM_proxy_configuration.h>
#include <sawIntuitiveResearchKit/teleop_PSM_proxy_configuration.h>

/* source line: 12 */
namespace dvrk {
enum console_input_type {UNDEFINED = 0, PEDALS_ONLY, PEDALS_GOOVIS_HEAD_SENSOR, PEDALS_ISI_HEAD_SENSOR, PEDALS_DVRK_HEAD_SENSOR, SIMULATED, COMPONENTS };
std::string console_input_typeToString(const console_input_type & value) CISST_THROW(std::runtime_error);
console_input_type console_input_typeFromString(const std::string & value) CISST_THROW(std::runtime_error);
const std::vector<int> & console_input_typeVectorInt(void);
const std::vector<std::string> & console_input_typeVectorString(void);
}
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(dvrk::console_input_type, int, dvrk::console_input_typeToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(dvrk::console_input_type);
#endif // CISST_HAS_JSON

/* source line: 46 */
namespace dvrk {
class CISST_EXPORT console_configuration
{
 /* default constructors and destructors. */
 public:
    console_configuration(void);
    console_configuration(const console_configuration & other);
    console_configuration & operator = (const console_configuration & other);
    ~console_configuration();

/* source line: 51 */
 public:
    std::string name; // name
/* source line: 57 */
 public:
    dvrk::console_input_type input_type; // input_type
/* source line: 63 */
 public:
    dvrk::IO_configuration IO_pedals; // IO_pedals
/* source line: 70 */
 public:
    dvrk::IO_configuration IO_head_sensor; // IO_head_sensor
/* source line: 77 */
 public:
    std::string HID_file; // HID_file
/* source line: 84 */
 public:
    dvrk::terminal clutch; // clutch
/* source line: 91 */
 public:
    dvrk::terminal camera; // camera
/* source line: 98 */
 public:
    dvrk::terminal operator_present; // operator_present
/* source line: 105 */
 public:
    std::vector<dvrk::teleop_PSM_proxy_configuration> teleop_PSMs; // teleop_PSMs
/* source line: 112 */
 public:
    std::vector<dvrk::teleop_ECM_proxy_configuration> teleop_ECMs; // teleop_ECMs
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const console_configuration & source);
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

}; // console_configuration
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::console_configuration> dvrk_console_configurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_console_configurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::console_configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::console_configuration & placeHolder);
/* data functions */
template <> class cmnData<dvrk::console_configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::console_configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::console_configuration & data) {
    outputStream << cmnData<dvrk::console_configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::console_configuration >::SerializeText(const dvrk::console_configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::console_configuration >::DeSerializeText(dvrk::console_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_console_configuration_h
