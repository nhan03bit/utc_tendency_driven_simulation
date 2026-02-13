// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/cisst/cisstInteractive/code/../ireTaskConstructorArg.cdg

#pragma once
#ifndef _cisstInteractive_ireTaskConstructorArg_h
#define _cisstInteractive_ireTaskConstructorArg_h

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
#include <cisstInteractive/ireExport.h>

/* source line: 9 */
enum IRE_Shell {IRE_WXPYTHON, IRE_IPYTHON };
CISST_EXPORT std::string IRE_ShellToString(const IRE_Shell & value) CISST_THROW(std::runtime_error);
CISST_EXPORT IRE_Shell IRE_ShellFromString(const std::string & value) CISST_THROW(std::runtime_error);
CISST_EXPORT const std::vector<int> & IRE_ShellVectorInt(void);
CISST_EXPORT const std::vector<std::string> & IRE_ShellVectorString(void);
CMN_DATA_SPECIALIZATION_FOR_ENUM_USER_HUMAN_READABLE(IRE_Shell, int, IRE_ShellToString);
#if CISST_HAS_JSON
  CMN_DECLARE_DATA_FUNCTIONS_JSON_FOR_ENUM_EXPORT(IRE_Shell);
#endif // CISST_HAS_JSON

/* source line: 26 */
class CISST_EXPORT ireTaskConstructorArg: public mtsGenericObject
{
 /* default constructors and destructors. */
 public:
    ireTaskConstructorArg(void);
    ireTaskConstructorArg(const ireTaskConstructorArg & other);
    ireTaskConstructorArg & operator = (const ireTaskConstructorArg & other);
    ~ireTaskConstructorArg();

/* source line: 34 */
 public:
    std::string Name; // Name
/* source line: 39 */
 public:
    IRE_Shell Shell; // Shell
/* source line: 45 */
 public:
    std::string Startup; // Startup
/* source line: 51 */

        CMN_DECLARE_SERVICES(CMN_DYNAMIC_CREATION, CMN_LOG_ALLOW_DEFAULT);
    
 public:
    /* ctor-all-member is set to: true */
    ireTaskConstructorArg(const std::string & newName, const IRE_Shell & newShell, const std::string & newStartup);
    /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const override;
    void DeSerializeRaw(std::istream & inputStream) override;
    void ToStream(std::ostream & outputStream) const override;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const override;
    /* default data methods */
 public:
    void Copy(const ireTaskConstructorArg & source);
    void SerializeBinary(std::ostream & outputStream) const CISST_THROW(std::runtime_error);
    void DeSerializeBinary(std::istream & inputStream, const cmnDataFormat & localFormat, const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error);
    void SerializeText(std::ostream & outputStream, const char delimiter = ',') const CISST_THROW(std::runtime_error);
    std::string SerializeDescription(const char delimiter = ',', const std::string & userDescription = "") const;
    void DeSerializeText(std::istream & inputStream, const char delimiter = ',') CISST_THROW(std::runtime_error);
    std::string HumanReadable(void) const;
    bool ScalarNumberIsFixed(void) const override;
    size_t ScalarNumber(void) const override;
    double Scalar(const size_t index) const CISST_THROW(std::out_of_range) override;
    std::string ScalarDescription(const size_t index, const std::string & userDescription = "") const CISST_THROW(std::out_of_range) override;
#if CISST_HAS_JSON
    void SerializeTextJSON(Json::Value & jsonValue) const override;
    void DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) override;
#endif // CISST_HAS_JSON

}; // ireTaskConstructorArg

// mts-proxy set to true
typedef mtsGenericObjectProxy<ireTaskConstructorArg> ireTaskConstructorArgProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(ireTaskConstructorArgProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const ireTaskConstructorArg & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, ireTaskConstructorArg & placeHolder);
/* data functions */
template <> class cmnData<ireTaskConstructorArg > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef ireTaskConstructorArg DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const ireTaskConstructorArg & data) {
    outputStream << cmnData<ireTaskConstructorArg >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<ireTaskConstructorArg >::SerializeText(const ireTaskConstructorArg & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<ireTaskConstructorArg >::DeSerializeText(ireTaskConstructorArg & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON

/* source line: 55 */

    CMN_DECLARE_SERVICES_INSTANTIATION(ireTaskConstructorArg);


#endif // _cisstInteractive_ireTaskConstructorArg_h
