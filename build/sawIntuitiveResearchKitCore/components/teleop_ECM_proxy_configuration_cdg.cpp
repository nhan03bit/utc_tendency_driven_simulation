// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/teleop_ECM_proxy_configuration.cdg

#include <sawIntuitiveResearchKit/teleop_ECM_proxy_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 10 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_teleop_ECM_proxy_configurationProxy);

dvrk::teleop_ECM_proxy_configuration::teleop_ECM_proxy_configuration(void):
    type(dvrk::teleop_ECM_type::TELEOP_ECM)
    , MTML()
    , MTMR()
    , ECM()
    , configure_parameter(Json::Value())
    , period(mtsIntuitiveResearchKit::TeleopPeriod)
{}

dvrk::teleop_ECM_proxy_configuration::teleop_ECM_proxy_configuration(const teleop_ECM_proxy_configuration & other):
    type(other.type)
    , MTML(other.MTML)
    , MTMR(other.MTMR)
    , ECM(other.ECM)
    , configure_parameter(other.configure_parameter)
    , period(other.period)
{}

dvrk::teleop_ECM_proxy_configuration & dvrk::teleop_ECM_proxy_configuration::operator = (const teleop_ECM_proxy_configuration & other)
{
    type = other.type;
    MTML = other.MTML;
    MTMR = other.MTMR;
    ECM = other.ECM;
    configure_parameter = other.configure_parameter;
    period = other.period;
    return *this;
}

dvrk::teleop_ECM_proxy_configuration::~teleop_ECM_proxy_configuration(void){}


void dvrk::teleop_ECM_proxy_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->type);
    cmnSerializeRaw(outputStream__cdg, this->MTML);
    cmnSerializeRaw(outputStream__cdg, this->MTMR);
    cmnSerializeRaw(outputStream__cdg, this->ECM);
    cmnSerializeRaw(outputStream__cdg, this->configure_parameter);
    cmnSerializeRaw(outputStream__cdg, this->period);
}


void dvrk::teleop_ECM_proxy_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->type);
    cmnDeSerializeRaw(inputStream__cdg, this->MTML);
    cmnDeSerializeRaw(inputStream__cdg, this->MTMR);
    cmnDeSerializeRaw(inputStream__cdg, this->ECM);
    cmnDeSerializeRaw(inputStream__cdg, this->configure_parameter);
    cmnDeSerializeRaw(inputStream__cdg, this->period);
}


void dvrk::teleop_ECM_proxy_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::teleop_ECM_proxy_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::teleop_ECM_proxy_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::teleop_ECM_proxy_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 15 */
/* source line: 22 */
/* source line: 28 */
/* source line: 34 */
/* source line: 40 */
/* source line: 47 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::teleop_ECM_proxy_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::teleop_ECM_proxy_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::teleop_ECM_proxy_configuration::Copy(const dvrk::teleop_ECM_proxy_configuration & source__cdg) {
    cmnData<dvrk::teleop_ECM_type >::Copy(this->type, source__cdg.type);
    cmnData<std::string >::Copy(this->MTML, source__cdg.MTML);
    cmnData<std::string >::Copy(this->MTMR, source__cdg.MTMR);
    cmnData<std::string >::Copy(this->ECM, source__cdg.ECM);
    cmnData<Json::Value >::Copy(this->configure_parameter, source__cdg.configure_parameter);
    cmnData<double >::Copy(this->period, source__cdg.period);
}
void dvrk::teleop_ECM_proxy_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<dvrk::teleop_ECM_type >::SerializeBinary(this->type, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->MTML, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->MTMR, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->ECM, outputStream__cdg);
    cmnData<Json::Value >::SerializeBinary(this->configure_parameter, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->period, outputStream__cdg);
}
void dvrk::teleop_ECM_proxy_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<dvrk::teleop_ECM_type >::DeSerializeBinary(this->type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->MTML, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->MTMR, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->ECM, inputStream__cdg, localFormat, remoteFormat);
    cmnData<Json::Value >::DeSerializeBinary(this->configure_parameter, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->period, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::teleop_ECM_proxy_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::teleop_ECM_type >::SerializeText(this->type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->MTML, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->MTMR, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->ECM, outputStream__cdg, delimiter__cdg);
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
}
std::string dvrk::teleop_ECM_proxy_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::teleop_ECM_type >::SerializeDescription(this->type, delimiter__cdg, prefix__cdg + "type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->MTML, delimiter__cdg, prefix__cdg + "MTML");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->MTMR, delimiter__cdg, prefix__cdg + "MTMR");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->ECM, delimiter__cdg, prefix__cdg + "ECM");
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
    return description__cdg.str();
}
void dvrk::teleop_ECM_proxy_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::teleop_ECM_type >::DeSerializeText(this->type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->MTML, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->MTMR, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->ECM, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<Json::Value >::DeSerializeText(this->configure_parameter, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::teleop_ECM_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->period, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::teleop_ECM_proxy_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::teleop_ECM_proxy_configuration" << std::endl;
    description__cdg << "  type:" << cmnData<dvrk::teleop_ECM_type >::HumanReadable(this->type);
    description__cdg << "  MTML:" << cmnData<std::string >::HumanReadable(this->MTML);
    description__cdg << "  MTMR:" << cmnData<std::string >::HumanReadable(this->MTMR);
    description__cdg << "  ECM:" << cmnData<std::string >::HumanReadable(this->ECM);
    description__cdg << "  configure_parameter:" << cmnData<Json::Value >::HumanReadable(this->configure_parameter);
    description__cdg << "  period:" << cmnData<double >::HumanReadable(this->period);
    return description__cdg.str();
}
bool dvrk::teleop_ECM_proxy_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<dvrk::teleop_ECM_type >::ScalarNumberIsFixed(this->type)
           && cmnData<std::string >::ScalarNumberIsFixed(this->MTML)
           && cmnData<std::string >::ScalarNumberIsFixed(this->MTMR)
           && cmnData<std::string >::ScalarNumberIsFixed(this->ECM)
           && cmnData<Json::Value >::ScalarNumberIsFixed(this->configure_parameter)
           && cmnData<double >::ScalarNumberIsFixed(this->period)
    ;
}
size_t dvrk::teleop_ECM_proxy_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<dvrk::teleop_ECM_type >::ScalarNumber(this->type)
           + cmnData<std::string >::ScalarNumber(this->MTML)
           + cmnData<std::string >::ScalarNumber(this->MTMR)
           + cmnData<std::string >::ScalarNumber(this->ECM)
           + cmnData<Json::Value >::ScalarNumber(this->configure_parameter)
           + cmnData<double >::ScalarNumber(this->period)
    ;
}
std::string dvrk::teleop_ECM_proxy_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<dvrk::teleop_ECM_type >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::teleop_ECM_type >::ScalarDescription(this->type, index_cdg - baseIndex__cdg, prefix__cdg + "type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->MTML);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->MTML, index_cdg - baseIndex__cdg, prefix__cdg + "MTML");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->MTMR);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->MTMR, index_cdg - baseIndex__cdg, prefix__cdg + "MTMR");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ECM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->ECM, index_cdg - baseIndex__cdg, prefix__cdg + "ECM");
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
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::teleop_ECM_proxy_configuration index out of range"));
    return "";
}
double dvrk::teleop_ECM_proxy_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<dvrk::teleop_ECM_type >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::teleop_ECM_type >::Scalar(this->type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->MTML);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->MTML, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->MTMR);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->MTMR, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->ECM);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->ECM, index_cdg - baseIndex__cdg);
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
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::teleop_ECM_proxy_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::teleop_ECM_proxy_configuration >::SerializeText(const dvrk::teleop_ECM_proxy_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::teleop_ECM_proxy_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<dvrk::teleop_ECM_type >::SerializeText(this->type, jsonValue["type"]);
    cmnDataJSON<std::string >::SerializeText(this->MTML, jsonValue["MTML"]);
    cmnDataJSON<std::string >::SerializeText(this->MTMR, jsonValue["MTMR"]);
    cmnDataJSON<std::string >::SerializeText(this->ECM, jsonValue["ECM"]);
    cmnDataJSON<Json::Value >::SerializeText(this->configure_parameter, jsonValue["configure_parameter"]);
    cmnDataJSON<double >::SerializeText(this->period, jsonValue["period"]);
}
template<>
void cmnDataJSON<dvrk::teleop_ECM_proxy_configuration >::DeSerializeText(dvrk::teleop_ECM_proxy_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::teleop_ECM_proxy_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["type"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::teleop_ECM_type >::DeSerializeText(this->type, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < type");
        }
    };
    field__cdg = jsonValue["MTML"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->MTML, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < MTML");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: MTML");
    };
    field__cdg = jsonValue["MTMR"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->MTMR, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < MTMR");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: MTMR");
    };
    field__cdg = jsonValue["ECM"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->ECM, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < ECM");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: ECM");
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
}
#endif // CISST_HAS_JSON

