// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/arm_configuration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_arm_configuration_h
#define _sawIntuitiveResearchKit_arm_configuration_h

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

#include <sawIntuitiveResearchKit/generation.h>

/* source line: 8 */
namespace dvrk {
class CISST_EXPORT arm_configuration
{
 /* default constructors and destructors. */
 public:
    arm_configuration(void);
    arm_configuration(const arm_configuration & other);
    arm_configuration & operator = (const arm_configuration & other);
    ~arm_configuration();

/* source line: 13 */
 private:
    dvrk::generation m_generation; // _generation
/* source line: 21 */
 public:
    std::string kinematic; // kinematic
/* source line: 27 */
 public:
    double mounting_pitch; // mounting_pitch
/* source line: 34 */


    public:

        inline void set_generation(const dvrk::generation generation) {
            m_generation = generation;
        }

        inline dvrk::generation generation(void) const {
            if (m_generation == dvrk::GENERATION_UNDEFINED) {
                CMN_LOG_INIT_ERROR << "dvrk::arm_configuration: trying to access generation before it is set"
                                   << std::endl;
                exit(EXIT_FAILURE);
            }
            return m_generation;
        }
        /* default methods */
 public:
    void SerializeRaw(std::ostream & outputStream) const;
    void DeSerializeRaw(std::istream & inputStream);
    void ToStream(std::ostream & outputStream) const;
    void ToStreamRaw(std::ostream & outputStream, const char delimiter = ' ',
                     bool headerOnly = false, const std::string & headerPrefix = "") const;
    /* default data methods */
 public:
    void Copy(const arm_configuration & source);
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

}; // arm_configuration
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::arm_configuration> dvrk_arm_configurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_arm_configurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::arm_configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::arm_configuration & placeHolder);
/* data functions */
template <> class cmnData<dvrk::arm_configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::arm_configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::arm_configuration & data) {
    outputStream << cmnData<dvrk::arm_configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::arm_configuration >::SerializeText(const dvrk::arm_configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::arm_configuration >::DeSerializeText(dvrk::arm_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_arm_configuration_h
