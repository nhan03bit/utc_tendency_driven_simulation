// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/arm_proxy_configuration.cdg

#pragma once
#ifndef _sawIntuitiveResearchKit_arm_proxy_configuration_h
#define _sawIntuitiveResearchKit_arm_proxy_configuration_h

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

#include <sawIntuitiveResearchKit/arm_type.h>
#include <sawIntuitiveResearchKit/simulation.h>
#include <sawIntuitiveResearchKit/base_frame.h>
// Always include last
#include <sawIntuitiveResearchKit/sawIntuitiveResearchKitExport.h>

// Following needed on Windows
#ifdef interface
#undef interface
#endif


/* source line: 21 */
namespace dvrk {
class CISST_EXPORT arm_proxy_configuration
{
 /* default constructors and destructors. */
 public:
    arm_proxy_configuration(void);
    arm_proxy_configuration(const arm_proxy_configuration & other);
    arm_proxy_configuration & operator = (const arm_proxy_configuration & other);
    ~arm_proxy_configuration();

/* source line: 26 */
 public:
    std::string name; // name
/* source line: 32 */
 public:
    std::string name_on_IO; // name_on_IO
/* source line: 39 */
 public:
    dvrk::arm_type type; // type
/* source line: 45 */
 public:
    std::string IO; // IO
/* source line: 52 */
 public:
    std::string serial; // serial
/* source line: 59 */
 public:
    dvrk::simulation simulation; // simulation
/* source line: 66 */
 public:
    std::string arm_file; // arm_file
/* source line: 73 */
 public:
    std::string PID_file; // PID_file
/* source line: 80 */
 public:
    std::string IO_file; // IO_file
/* source line: 87 */
 public:
    std::string IO_gripper_file; // IO_gripper_file
/* source line: 94 */
 public:
    double period; // period
/* source line: 101 */
 public:
    double PID_period; // Period to use for the PID component, 0.0 is used to run the PID using the IO thread
/* source line: 109 */
 public:
    bool skip_ROS_bridge; // skip_ROS_bridge
/* source line: 116 */
 public:
    std::string component; // Name of component to use for generic or derived classes
/* source line: 124 */
 public:
    std::string interface; // Name of interface to use for generic or derived classes
/* source line: 132 */
 public:
    dvrk::base_frame base_frame; // Base frame, defined as a reference frame name and fixed transformation or a component/interface
/* source line: 140 */


    public:

        inline bool simulated(void) const {
            return this->simulation != SIMULATION_NONE;
        }

        inline bool native(void) const {
            switch (this->type) {
	        case dvrk::arm_type::MTM:
            case dvrk::arm_type::PSM:
            case dvrk::arm_type::ECM:
            case dvrk::arm_type::SUJ_Classic:
            case dvrk::arm_type::SUJ_Si:
            case dvrk::arm_type::SUJ_Fixed:
            case dvrk::arm_type::FOCUS_CONTROLLER:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool derived(void) const {
            switch (this->type) {
            case dvrk::arm_type::MTM_DERIVED:
            case dvrk::arm_type::PSM_DERIVED:
            case dvrk::arm_type::ECM_DERIVED:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool generic(void) const {
            switch (this->type) {
            case dvrk::arm_type::MTM_GENERIC:
            case dvrk::arm_type::PSM_GENERIC:
            case dvrk::arm_type::ECM_GENERIC:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool native_or_derived(void) const {
            return native() || derived();
        }

        inline bool generic_or_derived(void) const {
            return generic() || derived();
        }

        inline bool PSM(void) const {
            switch (this->type) {
            case dvrk::arm_type::PSM:
            case dvrk::arm_type::PSM_DERIVED:
            case dvrk::arm_type::PSM_GENERIC:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool MTM(void) const {
            switch (this->type) {
            case dvrk::arm_type::MTM:
            case dvrk::arm_type::MTM_DERIVED:
            case dvrk::arm_type::MTM_GENERIC:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool ECM(void) const {
            switch (this->type) {
            case dvrk::arm_type::ECM:
            case dvrk::arm_type::ECM_DERIVED:
            case dvrk::arm_type::ECM_GENERIC:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool SUJ(void) const {
            switch (this->type) {
            case dvrk::arm_type::SUJ_Classic:
            case dvrk::arm_type::SUJ_Si:
            case dvrk::arm_type::SUJ_Fixed:
                return true;
                break;
            default:
                return false;
                break;
            }
            return false;
        }

        inline bool native_or_derived_MTM(void) const {
            return native_or_derived() && MTM();
        }

        inline bool native_or_derived_PSM(void) const {
            return native_or_derived() && PSM();
        }

        inline bool native_or_derived_ECM(void) const {
            return native_or_derived() && ECM();
        }

        inline bool expects_PID(void) const {
            return (native_or_derived()
                    && !SUJ());
        }

        inline bool expects_IO(void) const {
            return (native_or_derived()
                    && (this->type != dvrk::arm_type::SUJ_Si)
                    && (this->type != dvrk::arm_type::SUJ_Fixed)
                    && (this->simulation == SIMULATION_NONE));
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
    void Copy(const arm_proxy_configuration & source);
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

}; // arm_proxy_configuration
}; // end of namespace dvrk

// mts-proxy set to true
typedef mtsGenericObjectProxy<dvrk::arm_proxy_configuration> dvrk_arm_proxy_configurationProxy;
CMN_DECLARE_SERVICES_INSTANTIATION(dvrk_arm_proxy_configurationProxy);

/* default functions */
void CISST_EXPORT cmnSerializeRaw(std::ostream & outputStream, const dvrk::arm_proxy_configuration & object);
void CISST_EXPORT cmnDeSerializeRaw(std::istream & inputStream, dvrk::arm_proxy_configuration & placeHolder);
/* data functions */
template <> class cmnData<dvrk::arm_proxy_configuration > {
public: 
    enum {IS_SPECIALIZED = 1};
    typedef dvrk::arm_proxy_configuration DataType;
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
inline std::ostream & operator << (std::ostream & outputStream, const dvrk::arm_proxy_configuration & data) {
    outputStream << cmnData<dvrk::arm_proxy_configuration >::HumanReadable(data);
    return outputStream;
}
#if CISST_HAS_JSON
template <> void CISST_EXPORT cmnDataJSON<dvrk::arm_proxy_configuration >::SerializeText(const dvrk::arm_proxy_configuration & data, Json::Value & jsonValue);
template <> void CISST_EXPORT cmnDataJSON<dvrk::arm_proxy_configuration >::DeSerializeText(dvrk::arm_proxy_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error);
#endif // CISST_HAS_JSON


#endif // _sawIntuitiveResearchKit_arm_proxy_configuration_h
