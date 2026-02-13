// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/system_configuration.cdg

#include <sawIntuitiveResearchKit/system_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 12 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_system_configuration_settingsProxy);

dvrk::system_configuration_settings::system_configuration_settings(void):
    chatty(false)
    , path(std::vector<std::string>())
    , audio_volume(0.5)
{}

dvrk::system_configuration_settings::system_configuration_settings(const system_configuration_settings & other):
    chatty(other.chatty)
    , path(other.path)
    , audio_volume(other.audio_volume)
{}

dvrk::system_configuration_settings & dvrk::system_configuration_settings::operator = (const system_configuration_settings & other)
{
    chatty = other.chatty;
    path = other.path;
    audio_volume = other.audio_volume;
    return *this;
}

dvrk::system_configuration_settings::~system_configuration_settings(void){}


void dvrk::system_configuration_settings::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->chatty);
    cmnSerializeRaw(outputStream__cdg, this->path);
    cmnSerializeRaw(outputStream__cdg, this->audio_volume);
}


void dvrk::system_configuration_settings::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->chatty);
    cmnDeSerializeRaw(inputStream__cdg, this->path);
    cmnDeSerializeRaw(inputStream__cdg, this->audio_volume);
}


void dvrk::system_configuration_settings::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::system_configuration_settings::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::system_configuration_settings >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::system_configuration_settings >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 17 */
/* source line: 24 */
/* source line: 31 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::system_configuration_settings & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::system_configuration_settings & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::system_configuration_settings::Copy(const dvrk::system_configuration_settings & source__cdg) {
    cmnData<bool >::Copy(this->chatty, source__cdg.chatty);
    cmnData<std::vector<std::string> >::Copy(this->path, source__cdg.path);
    cmnData<double >::Copy(this->audio_volume, source__cdg.audio_volume);
}
void dvrk::system_configuration_settings::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<bool >::SerializeBinary(this->chatty, outputStream__cdg);
    cmnData<std::vector<std::string> >::SerializeBinary(this->path, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->audio_volume, outputStream__cdg);
}
void dvrk::system_configuration_settings::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<bool >::DeSerializeBinary(this->chatty, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<std::string> >::DeSerializeBinary(this->path, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->audio_volume, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::system_configuration_settings::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->chatty, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::SerializeText(this->path, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->audio_volume, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::system_configuration_settings::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->chatty, delimiter__cdg, prefix__cdg + "chatty");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<std::string> >::SerializeDescription(this->path, delimiter__cdg, prefix__cdg + "path");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->audio_volume, delimiter__cdg, prefix__cdg + "audio_volume");
    return description__cdg.str();
}
void dvrk::system_configuration_settings::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration_settings");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->chatty, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration_settings");
    }
    someData__cdg = true;
    cmnData<std::vector<std::string> >::DeSerializeText(this->path, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration_settings");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->audio_volume, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::system_configuration_settings::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::system_configuration_settings" << std::endl;
    description__cdg << "  chatty:" << cmnData<bool >::HumanReadable(this->chatty);
    description__cdg << "  path:" << cmnData<std::vector<std::string> >::HumanReadable(this->path);
    description__cdg << "  audio_volume:" << cmnData<double >::HumanReadable(this->audio_volume);
    return description__cdg.str();
}
bool dvrk::system_configuration_settings::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<bool >::ScalarNumberIsFixed(this->chatty)
           && cmnData<std::vector<std::string> >::ScalarNumberIsFixed(this->path)
           && cmnData<double >::ScalarNumberIsFixed(this->audio_volume)
    ;
}
size_t dvrk::system_configuration_settings::ScalarNumber(void) const {
    return 0
           + cmnData<bool >::ScalarNumber(this->chatty)
           + cmnData<std::vector<std::string> >::ScalarNumber(this->path)
           + cmnData<double >::ScalarNumber(this->audio_volume)
    ;
}
std::string dvrk::system_configuration_settings::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->chatty);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->chatty, index_cdg - baseIndex__cdg, prefix__cdg + "chatty");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->path);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::ScalarDescription(this->path, index_cdg - baseIndex__cdg, prefix__cdg + "path");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->audio_volume);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->audio_volume, index_cdg - baseIndex__cdg, prefix__cdg + "audio_volume");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::system_configuration_settings index out of range"));
    return "";
}
double dvrk::system_configuration_settings::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->chatty);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->chatty, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<std::string> >::ScalarNumber(this->path);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<std::string> >::Scalar(this->path, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->audio_volume);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->audio_volume, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::system_configuration_settings index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::system_configuration_settings >::SerializeText(const dvrk::system_configuration_settings & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::system_configuration_settings::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<bool >::SerializeText(this->chatty, jsonValue["chatty"]);
    cmnDataJSON<std::vector<std::string> >::SerializeText(this->path, jsonValue["path"]);
    cmnDataJSON<double >::SerializeText(this->audio_volume, jsonValue["audio_volume"]);
}
template<>
void cmnDataJSON<dvrk::system_configuration_settings >::DeSerializeText(dvrk::system_configuration_settings & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::system_configuration_settings::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["chatty"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->chatty, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < chatty");
        }
    };
    field__cdg = jsonValue["path"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<std::string> >::DeSerializeText(this->path, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < path");
        }
    };
    field__cdg = jsonValue["audio_volume"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->audio_volume, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < audio_volume");
        }
    };
}
#endif // CISST_HAS_JSON

/* source line: 40 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_system_configurationProxy);

dvrk::system_configuration::system_configuration(void):
    component_manager(Json::Value())
    , IOs(std::vector<dvrk::IO_proxy_configuration>())
    , ISI_focus_controller(dvrk::IO_configuration("ISI_focus_controller"))
    , arms(std::vector<dvrk::arm_proxy_configuration>())
    , consoles(std::vector<dvrk::console_configuration>())
    , settings(dvrk::system_configuration_settings())
{}

dvrk::system_configuration::system_configuration(const system_configuration & other):
    component_manager(other.component_manager)
    , IOs(other.IOs)
    , ISI_focus_controller(other.ISI_focus_controller)
    , arms(other.arms)
    , consoles(other.consoles)
    , settings(other.settings)
{}

dvrk::system_configuration & dvrk::system_configuration::operator = (const system_configuration & other)
{
    component_manager = other.component_manager;
    IOs = other.IOs;
    ISI_focus_controller = other.ISI_focus_controller;
    arms = other.arms;
    consoles = other.consoles;
    settings = other.settings;
    return *this;
}

dvrk::system_configuration::~system_configuration(void){}


void dvrk::system_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->component_manager);
    cmnSerializeRaw(outputStream__cdg, this->IOs);
    cmnSerializeRaw(outputStream__cdg, this->ISI_focus_controller);
    cmnSerializeRaw(outputStream__cdg, this->arms);
    cmnSerializeRaw(outputStream__cdg, this->consoles);
    cmnSerializeRaw(outputStream__cdg, this->settings);
}


void dvrk::system_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->component_manager);
    cmnDeSerializeRaw(inputStream__cdg, this->IOs);
    cmnDeSerializeRaw(inputStream__cdg, this->ISI_focus_controller);
    cmnDeSerializeRaw(inputStream__cdg, this->arms);
    cmnDeSerializeRaw(inputStream__cdg, this->consoles);
    cmnDeSerializeRaw(inputStream__cdg, this->settings);
}


void dvrk::system_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::system_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::system_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::system_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 45 */
/* source line: 52 */
/* source line: 59 */
/* source line: 66 */
/* source line: 73 */
/* source line: 80 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::system_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::system_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::system_configuration::Copy(const dvrk::system_configuration & source__cdg) {
    cmnData<Json::Value >::Copy(this->component_manager, source__cdg.component_manager);
    cmnData<std::vector<dvrk::IO_proxy_configuration> >::Copy(this->IOs, source__cdg.IOs);
    cmnData<dvrk::IO_configuration >::Copy(this->ISI_focus_controller, source__cdg.ISI_focus_controller);
    cmnData<std::vector<dvrk::arm_proxy_configuration> >::Copy(this->arms, source__cdg.arms);
    cmnData<std::vector<dvrk::console_configuration> >::Copy(this->consoles, source__cdg.consoles);
    cmnData<dvrk::system_configuration_settings >::Copy(this->settings, source__cdg.settings);
}
void dvrk::system_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<Json::Value >::SerializeBinary(this->component_manager, outputStream__cdg);
    cmnData<std::vector<dvrk::IO_proxy_configuration> >::SerializeBinary(this->IOs, outputStream__cdg);
    cmnData<dvrk::IO_configuration >::SerializeBinary(this->ISI_focus_controller, outputStream__cdg);
    cmnData<std::vector<dvrk::arm_proxy_configuration> >::SerializeBinary(this->arms, outputStream__cdg);
    cmnData<std::vector<dvrk::console_configuration> >::SerializeBinary(this->consoles, outputStream__cdg);
    cmnData<dvrk::system_configuration_settings >::SerializeBinary(this->settings, outputStream__cdg);
}
void dvrk::system_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<Json::Value >::DeSerializeBinary(this->component_manager, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<dvrk::IO_proxy_configuration> >::DeSerializeBinary(this->IOs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::IO_configuration >::DeSerializeBinary(this->ISI_focus_controller, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<dvrk::arm_proxy_configuration> >::DeSerializeBinary(this->arms, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<dvrk::console_configuration> >::DeSerializeBinary(this->consoles, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::system_configuration_settings >::DeSerializeBinary(this->settings, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::system_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<Json::Value >::SerializeText(this->component_manager, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::IO_proxy_configuration> >::SerializeText(this->IOs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::IO_configuration >::SerializeText(this->ISI_focus_controller, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::arm_proxy_configuration> >::SerializeText(this->arms, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::console_configuration> >::SerializeText(this->consoles, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::system_configuration_settings >::SerializeText(this->settings, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::system_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
    bool someData__cdg = false;
    const std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    std::stringstream description__cdg;
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<Json::Value >::SerializeDescription(this->component_manager, delimiter__cdg, prefix__cdg + "component_manager");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<dvrk::IO_proxy_configuration> >::SerializeDescription(this->IOs, delimiter__cdg, prefix__cdg + "IOs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::IO_configuration >::SerializeDescription(this->ISI_focus_controller, delimiter__cdg, prefix__cdg + "ISI_focus_controller");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<dvrk::arm_proxy_configuration> >::SerializeDescription(this->arms, delimiter__cdg, prefix__cdg + "arms");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<dvrk::console_configuration> >::SerializeDescription(this->consoles, delimiter__cdg, prefix__cdg + "consoles");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::system_configuration_settings >::SerializeDescription(this->settings, delimiter__cdg, prefix__cdg + "settings");
    return description__cdg.str();
}
void dvrk::system_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration");
    }
    someData__cdg = true;
    cmnData<Json::Value >::DeSerializeText(this->component_manager, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::IO_proxy_configuration> >::DeSerializeText(this->IOs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::IO_configuration >::DeSerializeText(this->ISI_focus_controller, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::arm_proxy_configuration> >::DeSerializeText(this->arms, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::console_configuration> >::DeSerializeText(this->consoles, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::system_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::system_configuration_settings >::DeSerializeText(this->settings, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::system_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::system_configuration" << std::endl;
    description__cdg << "  component_manager:" << cmnData<Json::Value >::HumanReadable(this->component_manager);
    description__cdg << "  IOs:" << cmnData<std::vector<dvrk::IO_proxy_configuration> >::HumanReadable(this->IOs);
    description__cdg << "  ISI_focus_controller:" << cmnData<dvrk::IO_configuration >::HumanReadable(this->ISI_focus_controller);
    description__cdg << "  arms:" << cmnData<std::vector<dvrk::arm_proxy_configuration> >::HumanReadable(this->arms);
    description__cdg << "  consoles:" << cmnData<std::vector<dvrk::console_configuration> >::HumanReadable(this->consoles);
    description__cdg << "  settings:" << cmnData<dvrk::system_configuration_settings >::HumanReadable(this->settings);
    return description__cdg.str();
}
bool dvrk::system_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<Json::Value >::ScalarNumberIsFixed(this->component_manager)
           && cmnData<std::vector<dvrk::IO_proxy_configuration> >::ScalarNumberIsFixed(this->IOs)
           && cmnData<dvrk::IO_configuration >::ScalarNumberIsFixed(this->ISI_focus_controller)
           && cmnData<std::vector<dvrk::arm_proxy_configuration> >::ScalarNumberIsFixed(this->arms)
           && cmnData<std::vector<dvrk::console_configuration> >::ScalarNumberIsFixed(this->consoles)
           && cmnData<dvrk::system_configuration_settings >::ScalarNumberIsFixed(this->settings)
    ;
}
size_t dvrk::system_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<Json::Value >::ScalarNumber(this->component_manager)
           + cmnData<std::vector<dvrk::IO_proxy_configuration> >::ScalarNumber(this->IOs)
           + cmnData<dvrk::IO_configuration >::ScalarNumber(this->ISI_focus_controller)
           + cmnData<std::vector<dvrk::arm_proxy_configuration> >::ScalarNumber(this->arms)
           + cmnData<std::vector<dvrk::console_configuration> >::ScalarNumber(this->consoles)
           + cmnData<dvrk::system_configuration_settings >::ScalarNumber(this->settings)
    ;
}
std::string dvrk::system_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<Json::Value >::ScalarNumber(this->component_manager);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<Json::Value >::ScalarDescription(this->component_manager, index_cdg - baseIndex__cdg, prefix__cdg + "component_manager");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::IO_proxy_configuration> >::ScalarNumber(this->IOs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::IO_proxy_configuration> >::ScalarDescription(this->IOs, index_cdg - baseIndex__cdg, prefix__cdg + "IOs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::IO_configuration >::ScalarNumber(this->ISI_focus_controller);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::IO_configuration >::ScalarDescription(this->ISI_focus_controller, index_cdg - baseIndex__cdg, prefix__cdg + "ISI_focus_controller");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::arm_proxy_configuration> >::ScalarNumber(this->arms);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::arm_proxy_configuration> >::ScalarDescription(this->arms, index_cdg - baseIndex__cdg, prefix__cdg + "arms");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::console_configuration> >::ScalarNumber(this->consoles);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::console_configuration> >::ScalarDescription(this->consoles, index_cdg - baseIndex__cdg, prefix__cdg + "consoles");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::system_configuration_settings >::ScalarNumber(this->settings);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::system_configuration_settings >::ScalarDescription(this->settings, index_cdg - baseIndex__cdg, prefix__cdg + "settings");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::system_configuration index out of range"));
    return "";
}
double dvrk::system_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<Json::Value >::ScalarNumber(this->component_manager);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<Json::Value >::Scalar(this->component_manager, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::IO_proxy_configuration> >::ScalarNumber(this->IOs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::IO_proxy_configuration> >::Scalar(this->IOs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::IO_configuration >::ScalarNumber(this->ISI_focus_controller);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::IO_configuration >::Scalar(this->ISI_focus_controller, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::arm_proxy_configuration> >::ScalarNumber(this->arms);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::arm_proxy_configuration> >::Scalar(this->arms, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::console_configuration> >::ScalarNumber(this->consoles);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::console_configuration> >::Scalar(this->consoles, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::system_configuration_settings >::ScalarNumber(this->settings);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::system_configuration_settings >::Scalar(this->settings, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::system_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::system_configuration >::SerializeText(const dvrk::system_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::system_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<Json::Value >::SerializeText(this->component_manager, jsonValue["component_manager"]);
    cmnDataJSON<std::vector<dvrk::IO_proxy_configuration> >::SerializeText(this->IOs, jsonValue["IOs"]);
    cmnDataJSON<dvrk::IO_configuration >::SerializeText(this->ISI_focus_controller, jsonValue["ISI_focus_controller"]);
    cmnDataJSON<std::vector<dvrk::arm_proxy_configuration> >::SerializeText(this->arms, jsonValue["arms"]);
    cmnDataJSON<std::vector<dvrk::console_configuration> >::SerializeText(this->consoles, jsonValue["consoles"]);
    cmnDataJSON<dvrk::system_configuration_settings >::SerializeText(this->settings, jsonValue["settings"]);
}
template<>
void cmnDataJSON<dvrk::system_configuration >::DeSerializeText(dvrk::system_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::system_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    Json::Value field__cdg;
    field__cdg = jsonValue["component_manager"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<Json::Value >::DeSerializeText(this->component_manager, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < component_manager");
        }
    };
    field__cdg = jsonValue["IOs"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<dvrk::IO_proxy_configuration> >::DeSerializeText(this->IOs, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IOs");
        }
    };
    field__cdg = jsonValue["ISI_focus_controller"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::IO_configuration >::DeSerializeText(this->ISI_focus_controller, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < ISI_focus_controller");
        }
    };
    field__cdg = jsonValue["arms"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<dvrk::arm_proxy_configuration> >::DeSerializeText(this->arms, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < arms");
        }
    };
    field__cdg = jsonValue["consoles"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<dvrk::console_configuration> >::DeSerializeText(this->consoles, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < consoles");
        }
    };
    field__cdg = jsonValue["settings"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::system_configuration_settings >::DeSerializeText(this->settings, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < settings");
        }
    };
}
#endif // CISST_HAS_JSON

