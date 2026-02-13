// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/IO_proxy_configuration.cdg

#include <sawIntuitiveResearchKit/IO_proxy_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 8 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_IO_proxy_configurationProxy);

dvrk::IO_proxy_configuration::IO_proxy_configuration(void):
    name()
    , port()
    , protocol("broadcast-query-read-write")
    , period(mtsIntuitiveResearchKit::IOPeriod)
    , watchdog_timeout(mtsIntuitiveResearchKit::WatchdogTimeout)
    , configuration_files(std::vector<std::string>())
    , close_all_relays(true)
{}

dvrk::IO_proxy_configuration::IO_proxy_configuration(const IO_proxy_configuration & other):
    name(other.name)
    , port(other.port)
    , protocol(other.protocol)
    , period(other.period)
    , watchdog_timeout(other.watchdog_timeout)
    , configuration_files(other.configuration_files)
    , close_all_relays(other.close_all_relays)
{}

dvrk::IO_proxy_configuration & dvrk::IO_proxy_configuration::operator = (const IO_proxy_configuration & other)
{
    name = other.name;
    port = other.port;
    protocol = other.protocol;
    period = other.period;
    watchdog_timeout = other.watchdog_timeout;
    configuration_files = other.configuration_files;
    close_all_relays = other.close_all_relays;
    return *this;
}

dvrk::IO_proxy_configuration::~IO_proxy_configuration(void){}


void dvrk::IO_proxy_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->port);
    cmnSerializeRaw(outputStream__cdg, this->protocol);
    cmnSerializeRaw(outputStream__cdg, this->period);
    cmnSerializeRaw(outputStream__cdg, this->watchdog_timeout);
    cmnSerializeRaw(outputStream__cdg, this->configuration_files);
    cmnSerializeRaw(outputStream__cdg, this->close_all_relays);
}


void dvrk::IO_proxy_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->port);
    cmnDeSerializeRaw(inputStream__cdg, this->protocol);
    cmnDeSerializeRaw(inputStream__cdg, this->period);
    cmnDeSerializeRaw(inputStream__cdg, this->watchdog_timeout);
    cmnDeSerializeRaw(inputStream__cdg, this->configuration_files);
    cmnDeSerializeRaw(inputStream__cdg, this->close_all_relays);
}


void dvrk::IO_proxy_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::IO_proxy_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::IO_proxy_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::IO_proxy_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 13 */
/* source line: 19 */
/* source line: 25 */
/* source line: 32 */
/* source line: 39 */
/* source line: 46 */
/* source line: 53 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::IO_proxy_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::IO_proxy_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::IO_proxy_configuration::Copy(const dvrk::IO_proxy_configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<std::string >::Copy(this->port, source__cdg.port);
    cmnData<std::string >::Copy(this->protocol, source__cdg.protocol);
    cmnData<double >::Copy(this->period, source__cdg.period);
    cmnData<double >::Copy(this->watchdog_timeout, source__cdg.watchdog_timeout);
    cmnData<std::vector<std::string> >::Copy(this->configuration_files, source__cdg.configuration_files);
    cmnData<bool >::Copy(this->close_all_relays, source__cdg.close_all_relays);
}
void dvrk::IO_proxy_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->port, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->protocol, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->period, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->watchdog_timeout, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->configuration_files, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->close_all_relays, outputStream__cdg);
}
void dvrk::IO_proxy_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->port, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->protocol, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->period, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->watchdog_timeout, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->configuration_files, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->close_all_relays, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::IO_proxy_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->name, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->port, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->protocol, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->period, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->watchdog_timeout, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->configuration_files, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->close_all_relays, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::IO_proxy_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->name, delimiter__cdg, prefix__cdg + "name");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->port, delimiter__cdg, prefix__cdg + "port");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->protocol, delimiter__cdg, prefix__cdg + "protocol");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->period, delimiter__cdg, prefix__cdg + "period");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->watchdog_timeout, delimiter__cdg, prefix__cdg + "watchdog_timeout");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->configuration_files, delimiter__cdg, prefix__cdg + "configuration_files");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->close_all_relays, delimiter__cdg, prefix__cdg + "close_all_relays");
    return description__cdg.str();
}
void dvrk::IO_proxy_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->port, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->protocol, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->period, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->watchdog_timeout, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->configuration_files, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::IO_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->close_all_relays, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::IO_proxy_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::IO_proxy_configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  port:" << cmnData<std::string >::HumanReadable(this->port);
    description__cdg << "  protocol:" << cmnData<std::string >::HumanReadable(this->protocol);
    description__cdg << "  period:" << cmnData<double >::HumanReadable(this->period);
    description__cdg << "  watchdog_timeout:" << cmnData<double >::HumanReadable(this->watchdog_timeout);
    description__cdg << "  configuration_files:" << cmnData<std::vector<std::string> >::HumanReadable(this->configuration_files);
    description__cdg << "  close_all_relays:" << cmnData<bool >::HumanReadable(this->close_all_relays);
    return description__cdg.str();
}
bool dvrk::IO_proxy_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->port)
           && cmnData<std::string >::ScalarNumberIsFixed(this->protocol)
           && cmnData<double >::ScalarNumberIsFixed(this->period)
           && cmnData<double >::ScalarNumberIsFixed(this->watchdog_timeout)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->configuration_files)
           && cmnData<bool >::ScalarNumberIsFixed(this->close_all_relays)
    ;
}
size_t dvrk::IO_proxy_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<std::string >::ScalarNumber(this->port)
           + cmnData<std::string >::ScalarNumber(this->protocol)
           + cmnData<double >::ScalarNumber(this->period)
           + cmnData<double >::ScalarNumber(this->watchdog_timeout)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->configuration_files)
           + cmnData<bool >::ScalarNumber(this->close_all_relays)
    ;
}
std::string dvrk::IO_proxy_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->port);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->port, index_cdg - baseIndex__cdg, prefix__cdg + "port");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->protocol);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->protocol, index_cdg - baseIndex__cdg, prefix__cdg + "protocol");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->period, index_cdg - baseIndex__cdg, prefix__cdg + "period");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->watchdog_timeout);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->watchdog_timeout, index_cdg - baseIndex__cdg, prefix__cdg + "watchdog_timeout");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->configuration_files);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->configuration_files, index_cdg - baseIndex__cdg, prefix__cdg + "configuration_files");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->close_all_relays);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->close_all_relays, index_cdg - baseIndex__cdg, prefix__cdg + "close_all_relays");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::IO_proxy_configuration index out of range"));
    return "";
}
double dvrk::IO_proxy_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->port);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->port, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->protocol);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->protocol, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->period, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->watchdog_timeout);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->watchdog_timeout, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->configuration_files);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->configuration_files, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->close_all_relays);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->close_all_relays, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::IO_proxy_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::IO_proxy_configuration >::SerializeText(const dvrk::IO_proxy_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::IO_proxy_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<std::string >::SerializeText(this->port, jsonValue["port"]);
    cmnDataJSON<std::string >::SerializeText(this->protocol, jsonValue["protocol"]);
    cmnDataJSON<double >::SerializeText(this->period, jsonValue["period"]);
    cmnDataJSON<double >::SerializeText(this->watchdog_timeout, jsonValue["watchdog_timeout"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->configuration_files, jsonValue["configuration_files"]);
    cmnDataJSON<bool >::SerializeText(this->close_all_relays, jsonValue["close_all_relays"]);
}
template<>
void cmnDataJSON<dvrk::IO_proxy_configuration >::DeSerializeText(dvrk::IO_proxy_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::IO_proxy_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["name"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: name");
    };
    field__cdg = jsonValue["port"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->port, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < port");
        }
    } else {
        cmnThrow("cmnDataJson<std::string>::DeSerializeText: empty JSON value for: port");
    };
    field__cdg = jsonValue["protocol"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->protocol, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < protocol");
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
    field__cdg = jsonValue["watchdog_timeout"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->watchdog_timeout, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < watchdog_timeout");
        }
    };
    field__cdg = jsonValue["configuration_files"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->configuration_files, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < configuration_files");
        }
    };
    field__cdg = jsonValue["close_all_relays"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->close_all_relays, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < close_all_relays");
        }
    };
}
#endif // CISST_HAS_JSON

