// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/console_configuration.cdg

#include <sawIntuitiveResearchKit/console_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */


/* source line: 46 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_console_configurationProxy);

dvrk::console_configuration::console_configuration(void):
    name()
    , input_type()
    , IO_pedals(dvrk::IO_configuration("IO_pedals"))
    , IO_head_sensor(dvrk::IO_configuration("IO_head_sensor"))
    , HID_file("")
    , clutch(dvrk::terminal())
    , camera(dvrk::terminal())
    , operator_present(dvrk::terminal())
    , teleop_PSMs(std::vector<dvrk::teleop_PSM_proxy_configuration>())
    , teleop_ECMs(std::vector<dvrk::teleop_ECM_proxy_configuration>())
{}

dvrk::console_configuration::console_configuration(const console_configuration & other):
    name(other.name)
    , input_type(other.input_type)
    , IO_pedals(other.IO_pedals)
    , IO_head_sensor(other.IO_head_sensor)
    , HID_file(other.HID_file)
    , clutch(other.clutch)
    , camera(other.camera)
    , operator_present(other.operator_present)
    , teleop_PSMs(other.teleop_PSMs)
    , teleop_ECMs(other.teleop_ECMs)
{}

dvrk::console_configuration & dvrk::console_configuration::operator = (const console_configuration & other)
{
    name = other.name;
    input_type = other.input_type;
    IO_pedals = other.IO_pedals;
    IO_head_sensor = other.IO_head_sensor;
    HID_file = other.HID_file;
    clutch = other.clutch;
    camera = other.camera;
    operator_present = other.operator_present;
    teleop_PSMs = other.teleop_PSMs;
    teleop_ECMs = other.teleop_ECMs;
    return *this;
}

dvrk::console_configuration::~console_configuration(void){}


void dvrk::console_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->input_type);
    cmnSerializeRaw(outputStream__cdg, this->IO_pedals);
    cmnSerializeRaw(outputStream__cdg, this->IO_head_sensor);
    cmnSerializeRaw(outputStream__cdg, this->HID_file);
    cmnSerializeRaw(outputStream__cdg, this->clutch);
    cmnSerializeRaw(outputStream__cdg, this->camera);
    cmnSerializeRaw(outputStream__cdg, this->operator_present);
    cmnSerializeRaw(outputStream__cdg, this->teleop_PSMs);
    cmnSerializeRaw(outputStream__cdg, this->teleop_ECMs);
}


void dvrk::console_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->input_type);
    cmnDeSerializeRaw(inputStream__cdg, this->IO_pedals);
    cmnDeSerializeRaw(inputStream__cdg, this->IO_head_sensor);
    cmnDeSerializeRaw(inputStream__cdg, this->HID_file);
    cmnDeSerializeRaw(inputStream__cdg, this->clutch);
    cmnDeSerializeRaw(inputStream__cdg, this->camera);
    cmnDeSerializeRaw(inputStream__cdg, this->operator_present);
    cmnDeSerializeRaw(inputStream__cdg, this->teleop_PSMs);
    cmnDeSerializeRaw(inputStream__cdg, this->teleop_ECMs);
}


void dvrk::console_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::console_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::console_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::console_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 51 */
/* source line: 57 */
/* source line: 63 */
/* source line: 70 */
/* source line: 77 */
/* source line: 84 */
/* source line: 91 */
/* source line: 98 */
/* source line: 105 */
/* source line: 112 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::console_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::console_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::console_configuration::Copy(const dvrk::console_configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<dvrk::console_input_type >::Copy(this->input_type, source__cdg.input_type);
    cmnData<dvrk::IO_configuration >::Copy(this->IO_pedals, source__cdg.IO_pedals);
    cmnData<dvrk::IO_configuration >::Copy(this->IO_head_sensor, source__cdg.IO_head_sensor);
    cmnData<std::string >::Copy(this->HID_file, source__cdg.HID_file);
    cmnData<dvrk::terminal >::Copy(this->clutch, source__cdg.clutch);
    cmnData<dvrk::terminal >::Copy(this->camera, source__cdg.camera);
    cmnData<dvrk::terminal >::Copy(this->operator_present, source__cdg.operator_present);
    cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::Copy(this->teleop_PSMs, source__cdg.teleop_PSMs);
    cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::Copy(this->teleop_ECMs, source__cdg.teleop_ECMs);
}
void dvrk::console_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<dvrk::console_input_type >::SerializeBinary(this->input_type, outputStream__cdg);
    cmnData<dvrk::IO_configuration >::SerializeBinary(this->IO_pedals, outputStream__cdg);
    cmnData<dvrk::IO_configuration >::SerializeBinary(this->IO_head_sensor, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->HID_file, outputStream__cdg);
    cmnData<dvrk::terminal >::SerializeBinary(this->clutch, outputStream__cdg);
    cmnData<dvrk::terminal >::SerializeBinary(this->camera, outputStream__cdg);
    cmnData<dvrk::terminal >::SerializeBinary(this->operator_present, outputStream__cdg);
    cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::SerializeBinary(this->teleop_PSMs, outputStream__cdg);
    cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::SerializeBinary(this->teleop_ECMs, outputStream__cdg);
}
void dvrk::console_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::console_input_type >::DeSerializeBinary(this->input_type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::IO_configuration >::DeSerializeBinary(this->IO_pedals, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::IO_configuration >::DeSerializeBinary(this->IO_head_sensor, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->HID_file, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::terminal >::DeSerializeBinary(this->clutch, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::terminal >::DeSerializeBinary(this->camera, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::terminal >::DeSerializeBinary(this->operator_present, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::DeSerializeBinary(this->teleop_PSMs, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::DeSerializeBinary(this->teleop_ECMs, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::console_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<dvrk::console_input_type >::SerializeText(this->input_type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::IO_configuration >::SerializeText(this->IO_pedals, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::IO_configuration >::SerializeText(this->IO_head_sensor, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->HID_file, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::SerializeText(this->clutch, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::SerializeText(this->camera, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::SerializeText(this->operator_present, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::SerializeText(this->teleop_PSMs, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::SerializeText(this->teleop_ECMs, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::console_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<dvrk::console_input_type >::SerializeDescription(this->input_type, delimiter__cdg, prefix__cdg + "input_type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::IO_configuration >::SerializeDescription(this->IO_pedals, delimiter__cdg, prefix__cdg + "IO_pedals");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::IO_configuration >::SerializeDescription(this->IO_head_sensor, delimiter__cdg, prefix__cdg + "IO_head_sensor");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->HID_file, delimiter__cdg, prefix__cdg + "HID_file");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::terminal >::SerializeDescription(this->clutch, delimiter__cdg, prefix__cdg + "clutch");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::terminal >::SerializeDescription(this->camera, delimiter__cdg, prefix__cdg + "camera");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::terminal >::SerializeDescription(this->operator_present, delimiter__cdg, prefix__cdg + "operator_present");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::SerializeDescription(this->teleop_PSMs, delimiter__cdg, prefix__cdg + "teleop_PSMs");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::SerializeDescription(this->teleop_ECMs, delimiter__cdg, prefix__cdg + "teleop_ECMs");
    return description__cdg.str();
}
void dvrk::console_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::console_input_type >::DeSerializeText(this->input_type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::IO_configuration >::DeSerializeText(this->IO_pedals, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::IO_configuration >::DeSerializeText(this->IO_head_sensor, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->HID_file, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::DeSerializeText(this->clutch, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::DeSerializeText(this->camera, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::terminal >::DeSerializeText(this->operator_present, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::DeSerializeText(this->teleop_PSMs, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::console_configuration");
    }
    someData__cdg = true;
    cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::DeSerializeText(this->teleop_ECMs, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::console_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::console_configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  input_type:" << cmnData<dvrk::console_input_type >::HumanReadable(this->input_type);
    description__cdg << "  IO_pedals:" << cmnData<dvrk::IO_configuration >::HumanReadable(this->IO_pedals);
    description__cdg << "  IO_head_sensor:" << cmnData<dvrk::IO_configuration >::HumanReadable(this->IO_head_sensor);
    description__cdg << "  HID_file:" << cmnData<std::string >::HumanReadable(this->HID_file);
    description__cdg << "  clutch:" << cmnData<dvrk::terminal >::HumanReadable(this->clutch);
    description__cdg << "  camera:" << cmnData<dvrk::terminal >::HumanReadable(this->camera);
    description__cdg << "  operator_present:" << cmnData<dvrk::terminal >::HumanReadable(this->operator_present);
    description__cdg << "  teleop_PSMs:" << cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::HumanReadable(this->teleop_PSMs);
    description__cdg << "  teleop_ECMs:" << cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::HumanReadable(this->teleop_ECMs);
    return description__cdg.str();
}
bool dvrk::console_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<dvrk::console_input_type >::ScalarNumberIsFixed(this->input_type)
           && cmnData<dvrk::IO_configuration >::ScalarNumberIsFixed(this->IO_pedals)
           && cmnData<dvrk::IO_configuration >::ScalarNumberIsFixed(this->IO_head_sensor)
           && cmnData<std::string >::ScalarNumberIsFixed(this->HID_file)
           && cmnData<dvrk::terminal >::ScalarNumberIsFixed(this->clutch)
           && cmnData<dvrk::terminal >::ScalarNumberIsFixed(this->camera)
           && cmnData<dvrk::terminal >::ScalarNumberIsFixed(this->operator_present)
           && cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::ScalarNumberIsFixed(this->teleop_PSMs)
           && cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::ScalarNumberIsFixed(this->teleop_ECMs)
    ;
}
size_t dvrk::console_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<dvrk::console_input_type >::ScalarNumber(this->input_type)
           + cmnData<dvrk::IO_configuration >::ScalarNumber(this->IO_pedals)
           + cmnData<dvrk::IO_configuration >::ScalarNumber(this->IO_head_sensor)
           + cmnData<std::string >::ScalarNumber(this->HID_file)
           + cmnData<dvrk::terminal >::ScalarNumber(this->clutch)
           + cmnData<dvrk::terminal >::ScalarNumber(this->camera)
           + cmnData<dvrk::terminal >::ScalarNumber(this->operator_present)
           + cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::ScalarNumber(this->teleop_PSMs)
           + cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::ScalarNumber(this->teleop_ECMs)
    ;
}
std::string dvrk::console_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::console_input_type >::ScalarNumber(this->input_type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::console_input_type >::ScalarDescription(this->input_type, index_cdg - baseIndex__cdg, prefix__cdg + "input_type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::IO_configuration >::ScalarNumber(this->IO_pedals);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::IO_configuration >::ScalarDescription(this->IO_pedals, index_cdg - baseIndex__cdg, prefix__cdg + "IO_pedals");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::IO_configuration >::ScalarNumber(this->IO_head_sensor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::IO_configuration >::ScalarDescription(this->IO_head_sensor, index_cdg - baseIndex__cdg, prefix__cdg + "IO_head_sensor");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->HID_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->HID_file, index_cdg - baseIndex__cdg, prefix__cdg + "HID_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->clutch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::ScalarDescription(this->clutch, index_cdg - baseIndex__cdg, prefix__cdg + "clutch");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->camera);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::ScalarDescription(this->camera, index_cdg - baseIndex__cdg, prefix__cdg + "camera");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->operator_present);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::ScalarDescription(this->operator_present, index_cdg - baseIndex__cdg, prefix__cdg + "operator_present");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::ScalarNumber(this->teleop_PSMs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::ScalarDescription(this->teleop_PSMs, index_cdg - baseIndex__cdg, prefix__cdg + "teleop_PSMs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::ScalarNumber(this->teleop_ECMs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::ScalarDescription(this->teleop_ECMs, index_cdg - baseIndex__cdg, prefix__cdg + "teleop_ECMs");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::console_configuration index out of range"));
    return "";
}
double dvrk::console_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::console_input_type >::ScalarNumber(this->input_type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::console_input_type >::Scalar(this->input_type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::IO_configuration >::ScalarNumber(this->IO_pedals);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::IO_configuration >::Scalar(this->IO_pedals, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::IO_configuration >::ScalarNumber(this->IO_head_sensor);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::IO_configuration >::Scalar(this->IO_head_sensor, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->HID_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->HID_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->clutch);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::Scalar(this->clutch, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->camera);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::Scalar(this->camera, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::terminal >::ScalarNumber(this->operator_present);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::terminal >::Scalar(this->operator_present, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::ScalarNumber(this->teleop_PSMs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::teleop_PSM_proxy_configuration> >::Scalar(this->teleop_PSMs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::ScalarNumber(this->teleop_ECMs);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::vector<dvrk::teleop_ECM_proxy_configuration> >::Scalar(this->teleop_ECMs, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::console_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::console_configuration >::SerializeText(const dvrk::console_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::console_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<dvrk::console_input_type >::SerializeText(this->input_type, jsonValue["input_type"]);
    cmnDataJSON<dvrk::IO_configuration >::SerializeText(this->IO_pedals, jsonValue["IO_pedals"]);
    cmnDataJSON<dvrk::IO_configuration >::SerializeText(this->IO_head_sensor, jsonValue["IO_head_sensor"]);
    cmnDataJSON<std::string >::SerializeText(this->HID_file, jsonValue["HID_file"]);
    cmnDataJSON<dvrk::terminal >::SerializeText(this->clutch, jsonValue["clutch"]);
    cmnDataJSON<dvrk::terminal >::SerializeText(this->camera, jsonValue["camera"]);
    cmnDataJSON<dvrk::terminal >::SerializeText(this->operator_present, jsonValue["operator_present"]);
    cmnDataJSON<std::vector<dvrk::teleop_PSM_proxy_configuration> >::SerializeText(this->teleop_PSMs, jsonValue["teleop_PSMs"]);
    cmnDataJSON<std::vector<dvrk::teleop_ECM_proxy_configuration> >::SerializeText(this->teleop_ECMs, jsonValue["teleop_ECMs"]);
}
template<>
void cmnDataJSON<dvrk::console_configuration >::DeSerializeText(dvrk::console_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::console_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
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
    field__cdg = jsonValue["input_type"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::console_input_type >::DeSerializeText(this->input_type, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < input_type");
        }
    } else {
        cmnThrow("cmnDataJson<dvrk::console_input_type>::DeSerializeText: empty JSON value for: input_type");
    };
    field__cdg = jsonValue["IO_pedals"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::IO_configuration >::DeSerializeText(this->IO_pedals, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO_pedals");
        }
    };
    field__cdg = jsonValue["IO_head_sensor"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::IO_configuration >::DeSerializeText(this->IO_head_sensor, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO_head_sensor");
        }
    };
    field__cdg = jsonValue["HID_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->HID_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < HID_file");
        }
    };
    field__cdg = jsonValue["clutch"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::terminal >::DeSerializeText(this->clutch, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < clutch");
        }
    };
    field__cdg = jsonValue["camera"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::terminal >::DeSerializeText(this->camera, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < camera");
        }
    };
    field__cdg = jsonValue["operator_present"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::terminal >::DeSerializeText(this->operator_present, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < operator_present");
        }
    };
    field__cdg = jsonValue["teleop_PSMs"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<dvrk::teleop_PSM_proxy_configuration> >::DeSerializeText(this->teleop_PSMs, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < teleop_PSMs");
        }
    };
    field__cdg = jsonValue["teleop_ECMs"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::vector<dvrk::teleop_ECM_proxy_configuration> >::DeSerializeText(this->teleop_ECMs, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < teleop_ECMs");
        }
    };
}
#endif // CISST_HAS_JSON

namespace dvrk {
std::string cmnDataHumanReadable__console_input_type(const console_input_type & data) {
    switch (data) {
        case UNDEFINED:
            return "Undefined";
            break;
        case PEDALS_ONLY:
            return "Only use foot pedals, coag is used for operator_present";
            break;
        case PEDALS_GOOVIS_HEAD_SENSOR:
            return "Use pedals for clutch and camera, Goovis HID for operator_present";
            break;
        case PEDALS_ISI_HEAD_SENSOR:
            return "Use pedals for clutch and camera, ISI head sensor for operator_present";
            break;
        case PEDALS_DVRK_HEAD_SENSOR:
            return "Use pedals for clutch and camera, dVRK head sensor for operator_present";
            break;
        case SIMULATED:
            return "No inputs required";
            break;
        case COMPONENTS:
            return "Specify the component and interface for each input: clutch, camera, operator_present";
            break;
        default: return "undefined enum console_input_type";
            break;
    }
}

std::string console_input_typeToString(const console_input_type & data) CISST_THROW(std::runtime_error) {
    switch (data) {
        case UNDEFINED:
            return "UNDEFINED";
            break;
        case PEDALS_ONLY:
            return "PEDALS_ONLY";
            break;
        case PEDALS_GOOVIS_HEAD_SENSOR:
            return "PEDALS_GOOVIS_HEAD_SENSOR";
            break;
        case PEDALS_ISI_HEAD_SENSOR:
            return "PEDALS_ISI_HEAD_SENSOR";
            break;
        case PEDALS_DVRK_HEAD_SENSOR:
            return "PEDALS_DVRK_HEAD_SENSOR";
            break;
        case SIMULATED:
            return "SIMULATED";
            break;
        case COMPONENTS:
            return "COMPONENTS";
            break;
        default:
            break;
    }
    cmnThrow("console_input_typeToString called with invalid enum");
    return "";
}

console_input_type console_input_typeFromString(const std::string & value) CISST_THROW(std::runtime_error) {
    if (value == "UNDEFINED") {
        return UNDEFINED;
    };
    if (value == "PEDALS_ONLY") {
        return PEDALS_ONLY;
    };
    if (value == "PEDALS_GOOVIS_HEAD_SENSOR") {
        return PEDALS_GOOVIS_HEAD_SENSOR;
    };
    if (value == "PEDALS_ISI_HEAD_SENSOR") {
        return PEDALS_ISI_HEAD_SENSOR;
    };
    if (value == "PEDALS_DVRK_HEAD_SENSOR") {
        return PEDALS_DVRK_HEAD_SENSOR;
    };
    if (value == "SIMULATED") {
        return SIMULATED;
    };
    if (value == "COMPONENTS") {
        return COMPONENTS;
    };
    std::string message = "console_input_typeFromString can't find matching enum for " + value + ".  Options are: ";
    std::vector<std::string> options = console_input_typeVectorString();
    for (std::vector<std::string>::const_iterator i = options.begin(); i != options.end(); ++i) message += *i + " ";
    cmnThrow(message);
    return static_cast<console_input_type >(0);
}

const std::vector<int> & console_input_typeVectorInt(void) {
    static std::vector<int> vectorInt;
    if (vectorInt.empty()) {
        vectorInt.push_back(static_cast<int>(UNDEFINED));
        vectorInt.push_back(static_cast<int>(PEDALS_ONLY));
        vectorInt.push_back(static_cast<int>(PEDALS_GOOVIS_HEAD_SENSOR));
        vectorInt.push_back(static_cast<int>(PEDALS_ISI_HEAD_SENSOR));
        vectorInt.push_back(static_cast<int>(PEDALS_DVRK_HEAD_SENSOR));
        vectorInt.push_back(static_cast<int>(SIMULATED));
        vectorInt.push_back(static_cast<int>(COMPONENTS));
    }
    return vectorInt;
}

const std::vector<std::string> & console_input_typeVectorString(void) {
    static std::vector<std::string> vectorString;
    if (vectorString.empty()) {
        vectorString.push_back("UNDEFINED");
        vectorString.push_back("PEDALS_ONLY");
        vectorString.push_back("PEDALS_GOOVIS_HEAD_SENSOR");
        vectorString.push_back("PEDALS_ISI_HEAD_SENSOR");
        vectorString.push_back("PEDALS_DVRK_HEAD_SENSOR");
        vectorString.push_back("SIMULATED");
        vectorString.push_back("COMPONENTS");
    }
    return vectorString;
}

}
#if CISST_HAS_JSON
  CMN_IMPLEMENT_DATA_FUNCTIONS_JSON_FOR_ENUM_AS_STRING(dvrk::console_input_type, dvrk::console_input_typeToString, dvrk::console_input_typeFromString);
#endif // CISST_HAS_JSON

