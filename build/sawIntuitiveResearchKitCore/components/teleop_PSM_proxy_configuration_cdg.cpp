// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_PSM_proxy_configuration.cdg

#include <sawIntuitiveResearchKit/teleop_PSM_proxy_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 11 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_teleop_PSM_proxy_configurationProxy);

dvrk::teleop_PSM_proxy_configuration::teleop_PSM_proxy_configuration(void):
    type(dvrk::teleop_PSM_type::TELEOP_PSM)
    , MTM()
    , PSM()
    , configure_parameter(Json::Value())
    , period(mtsIntuitiveResearchKit::TeleopPeriod)
    , PSM_base_frame(dvrk::terminal())
{}

dvrk::teleop_PSM_proxy_configuration::teleop_PSM_proxy_configuration(const teleop_PSM_proxy_configuration & other):
    type(other.type)
    , MTM(other.MTM)
    , PSM(other.PSM)
    , configure_parameter(other.configure_parameter)
    , period(other.period)
    , PSM_base_frame(other.PSM_base_frame)
{}

dvrk::teleop_PSM_proxy_configuration & dvrk::teleop_PSM_proxy_configuration::operator = (const teleop_PSM_proxy_configuration & other)
{
    type = other.type;
    MTM = other.MTM;
    PSM = other.PSM;
    configure_parameter = other.configure_parameter;
    period = other.period;
    PSM_base_frame = other.PSM_base_frame;
    return *this;
}

dvrk::teleop_PSM_proxy_configuration::~teleop_PSM_proxy_configuration(void){}


void dvrk::teleop_PSM_proxy_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->type);
    cmnSerializeRaw(outputStream__cdg, this->MTM);
    cmnSerializeRaw(outputStream__cdg, this->PSM);
    cmnSerializeRaw(outputStream__cdg, this->configure_parameter);
    cmnSerializeRaw(outputStream__cdg, this->period);
    cmnSerializeRaw(outputStream__cdg, this->PSM_base_frame);
}


void dvrk::teleop_PSM_proxy_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->type);
    cmnDeSerializeRaw(inputStream__cdg, this->MTM);
    cmnDeSerializeRaw(inputStream__cdg, this->PSM);
    cmnDeSerializeRaw(inputStream__cdg, this->configure_parameter);
    cmnDeSerializeRaw(inputStream__cdg, this->period);
    cmnDeSerializeRaw(inputStream__cdg, this->PSM_base_frame);
}


void dvrk::teleop_PSM_proxy_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::teleop_PSM_proxy_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::teleop_PSM_proxy_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::teleop_PSM_proxy_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 16 */
/* source line: 23 */
/* source line: 29 */
/* source line: 35 */
/* source line: 42 */
/* source line: 49 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_PSM_proxy_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_PSM_proxy_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::teleop_PSM_proxy_configuration::Copy(const dvrk::teleop_PSM_proxy_configuration & source__cdg) {
    cmnData<dvrk::teleop_PSM_type >::Copy(this->type, source__cdg.type);
    cmnData<std::string >::Copy(this->MTM, source__cdg.MTM);
    cmnData<std::string >::Copy(this->PSM, source__cdg.PSM);
    cmnData<Json::Value >::Copy(this->configure_parameter, source__cdg.configure_parameter);
    cmnData<double >::Copy(this->period, source__cdg.period);
    cmnData<dvrk::terminal >::Copy(this->PSM_base_frame, source__cdg.PSM_base_frame);
}
void dvrk::teleop_PSM_proxy_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<dvrk::teleop_PSM_type >::SerializeBinary(this->type, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->MTM, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->PSM, outputStream__cdg);
    cmnData<Json::Value >::SerializeBinary(this->configure_parameter, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->period, outputStream__cdg);
    cmnData<dvrk::terminal >::SerializeBinary(this->PSM_base_frame, outputStream__cdg);
}
void dvrk::teleop_PSM_proxy_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<dvrk::teleop_PSM_type >::DeSerializeBinary(this->type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->MTM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->PSM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<Json::Value >::DeSerializeBinary(this->configure_parameter, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->period, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::terminal >::DeSerializeBinary(this->PSM_base_frame, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::teleop_PSM_proxy_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::teleop_PSM_type >::SerializeText(this->type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->MTM, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->PSM, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<Json::Value >::SerializeText(this->configure_parameter, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->period, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::SerializeText(this->PSM_base_frame, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_PSM_proxy_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::teleop_PSM_type >::SerializeDescription(this->type, delimiter__cdg, prefix__cdg + "type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->MTM, delimiter__cdg, prefix__cdg + "MTM");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->PSM, delimiter__cdg, prefix__cdg + "PSM");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<Json::Value >::SerializeDescription(this->configure_parameter, delimiter__cdg, prefix__cdg + "configure_parameter");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->period, delimiter__cdg, prefix__cdg + "period");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::terminal >::SerializeDescription(this->PSM_base_frame, delimiter__cdg, prefix__cdg + "PSM_base_frame");
    return description__cdg.str();
}
void dvrk::teleop_PSM_proxy_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::teleop_PSM_type >::DeSerializeText(this->type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->MTM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->PSM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<Json::Value >::DeSerializeText(this->configure_parameter, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->period, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_PSM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::DeSerializeText(this->PSM_base_frame, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_PSM_proxy_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::teleop_PSM_proxy_configuration" << std::endl;
    description__cdg << "  type:" << cmnData<dvrk::teleop_PSM_type >::HumanReadable(this->type);
    description__cdg << "  MTM:" << cmnData<std::string >::HumanReadable(this->MTM);
    description__cdg << "  PSM:" << cmnData<std::string >::HumanReadable(this->PSM);
    description__cdg << "  configure_parameter:" << cmnData<Json::Value >::HumanReadable(this->configure_parameter);
    description__cdg << "  period:" << cmnData<double >::HumanReadable(this->period);
    description__cdg << "  PSM_base_frame:" << cmnData<dvrk::terminal >::HumanReadable(this->PSM_base_frame);
    return description__cdg.str();
}
bool dvrk::teleop_PSM_proxy_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<dvrk::teleop_PSM_type >::ScalarNumberIsFixed(this->type)
           && cmnData<std::string >::ScalarNumberIsFixed(this->MTM)
           && cmnData<std::string >::ScalarNumberIsFixed(this->PSM)
           && cmnData<Json::Value >::ScalarNumberIsFixed(this->configure_parameter)
           && cmnData<double >::ScalarNumberIsFixed(this->period)
           && cmnData<dvrk::terminal >::ScalarNumberIsFixed(this->PSM_base_frame)
    ;
}
size_t dvrk::teleop_PSM_proxy_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<dvrk::teleop_PSM_type >::ScalarNumber(this->type)
           + cmnData<std::string >::ScalarNumber(this->MTM)
           + cmnData<std::string >::ScalarNumber(this->PSM)
           + cmnData<Json::Value >::ScalarNumber(this->configure_parameter)
           + cmnData<double >::ScalarNumber(this->period)
           + cmnData<dvrk::terminal >::ScalarNumber(this->PSM_base_frame)
    ;
}
std::string dvrk::teleop_PSM_proxy_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<dvrk::teleop_PSM_type >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::teleop_PSM_type >::ScalarDescription(this->type, index_cdg - baseIndex__cdg, prefix__cdg + "type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->MTM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->MTM, index_cdg - baseIndex__cdg, prefix__cdg + "MTM");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->PSM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->PSM, index_cdg - baseIndex__cdg, prefix__cdg + "PSM");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<Json::Value >::ScalarNumber(this->configure_parameter);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<Json::Value >::ScalarDescription(this->configure_parameter, index_cdg - baseIndex__cdg, prefix__cdg + "configure_parameter");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->period, index_cdg - baseIndex__cdg, prefix__cdg + "period");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->PSM_base_frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::ScalarDescription(this->PSM_base_frame, index_cdg - baseIndex__cdg, prefix__cdg + "PSM_base_frame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::teleop_PSM_proxy_configuration index out of range"));
    return "";
}
double dvrk::teleop_PSM_proxy_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<dvrk::teleop_PSM_type >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::teleop_PSM_type >::Scalar(this->type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->MTM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->MTM, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->PSM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->PSM, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<Json::Value >::ScalarNumber(this->configure_parameter);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<Json::Value >::Scalar(this->configure_parameter, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->period, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->PSM_base_frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::Scalar(this->PSM_base_frame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::teleop_PSM_proxy_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::teleop_PSM_proxy_configuration >::SerializeText(const dvrk::teleop_PSM_proxy_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::teleop_PSM_proxy_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<dvrk::teleop_PSM_type >::SerializeText(this->type, jsonValue["type"]);
    cmnDataJSON<std::string >::SerializeText(this->MTM, jsonValue["MTM"]);
    cmnDataJSON<std::string >::SerializeText(this->PSM, jsonValue["PSM"]);
    cmnDataJSON<Json::Value >::SerializeText(this->configure_parameter, jsonValue["configure_parameter"]);
    cmnDataJSON<double >::SerializeText(this->period, jsonValue["period"]);
    cmnDataJSON<dvrk::terminal >::SerializeText(this->PSM_base_frame, jsonValue["PSM_base_frame"]);
}
template<>
void cmnDataJSON<dvrk::teleop_PSM_proxy_configuration >::DeSerializeText(dvrk::teleop_PSM_proxy_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::teleop_PSM_proxy_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["type"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::teleop_PSM_type >::DeSerializeText(this->type, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < type");
        }
    };
    field__cdg = jsonValue["MTM"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->MTM, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < MTM");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: MTM");
    };
    field__cdg = jsonValue["PSM"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->PSM, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < PSM");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: PSM");
    };
    field__cdg = jsonValue["configure_parameter"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<Json::Value >::DeSerializeText(this->configure_parameter, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < configure_parameter");
        }
    };
    field__cdg = jsonValue["period"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->period, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < period");
        }
    };
    field__cdg = jsonValue["PSM_base_frame"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::terminal >::DeSerializeText(this->PSM_base_frame, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < PSM_base_frame");
        }
    };
}
#endif // CISST_HAS_JSON

