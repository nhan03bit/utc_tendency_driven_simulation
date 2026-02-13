// file automatically generated, do not modify
// cisst version: 1.4.0
// source file: /home/utc_sim/ros2_dvrk/src/cisst-saw/sawIntuitiveResearchKit/core/components/code/arm_proxy_configuration.cdg

#include <sawIntuitiveResearchKit/arm_proxy_configuration.h>
#include <cisstCommon/cmnDataFunctionsMacros.h>
#include <cisstCommon/cmnDataFunctionsEnumMacros.h>
#include <cisstCommon/cmnDataFunctionsString.h>
#include <cisstCommon/cmnDataFunctionsVector.h>
#include <cisstCommon/cmnDataFunctionsList.h>

/* source line: 1 */

/* source line: 17 */

#include <sawIntuitiveResearchKit/mtsIntuitiveResearchKit.h>

/* source line: 21 */

// mts-proxy set to true
CMN_IMPLEMENT_SERVICES_TEMPLATED(dvrk_arm_proxy_configurationProxy);

dvrk::arm_proxy_configuration::arm_proxy_configuration(void):
    name()
    , name_on_IO("")
    , type()
    , IO("")
    , serial("")
    , simulation(dvrk::SIMULATION_NONE)
    , arm_file("")
    , PID_file("")
    , IO_file("")
    , IO_gripper_file("")
    , period(mtsIntuitiveResearchKit::ArmPeriod)
    , PID_period(0.0)
    , skip_ROS_bridge(false)
    , component("")
    , interface("")
    , base_frame(dvrk::base_frame())
{}

dvrk::arm_proxy_configuration::arm_proxy_configuration(const arm_proxy_configuration & other):
    name(other.name)
    , name_on_IO(other.name_on_IO)
    , type(other.type)
    , IO(other.IO)
    , serial(other.serial)
    , simulation(other.simulation)
    , arm_file(other.arm_file)
    , PID_file(other.PID_file)
    , IO_file(other.IO_file)
    , IO_gripper_file(other.IO_gripper_file)
    , period(other.period)
    , PID_period(other.PID_period)
    , skip_ROS_bridge(other.skip_ROS_bridge)
    , component(other.component)
    , interface(other.interface)
    , base_frame(other.base_frame)
{}

dvrk::arm_proxy_configuration & dvrk::arm_proxy_configuration::operator = (const arm_proxy_configuration & other)
{
    name = other.name;
    name_on_IO = other.name_on_IO;
    type = other.type;
    IO = other.IO;
    serial = other.serial;
    simulation = other.simulation;
    arm_file = other.arm_file;
    PID_file = other.PID_file;
    IO_file = other.IO_file;
    IO_gripper_file = other.IO_gripper_file;
    period = other.period;
    PID_period = other.PID_period;
    skip_ROS_bridge = other.skip_ROS_bridge;
    component = other.component;
    interface = other.interface;
    base_frame = other.base_frame;
    return *this;
}

dvrk::arm_proxy_configuration::~arm_proxy_configuration(void){}


void dvrk::arm_proxy_configuration::SerializeRaw(std::ostream & outputStream__cdg) const
{
    cmnSerializeRaw(outputStream__cdg, this->name);
    cmnSerializeRaw(outputStream__cdg, this->name_on_IO);
    cmnSerializeRaw(outputStream__cdg, this->type);
    cmnSerializeRaw(outputStream__cdg, this->IO);
    cmnSerializeRaw(outputStream__cdg, this->serial);
    cmnSerializeRaw(outputStream__cdg, this->simulation);
    cmnSerializeRaw(outputStream__cdg, this->arm_file);
    cmnSerializeRaw(outputStream__cdg, this->PID_file);
    cmnSerializeRaw(outputStream__cdg, this->IO_file);
    cmnSerializeRaw(outputStream__cdg, this->IO_gripper_file);
    cmnSerializeRaw(outputStream__cdg, this->period);
    cmnSerializeRaw(outputStream__cdg, this->PID_period);
    cmnSerializeRaw(outputStream__cdg, this->skip_ROS_bridge);
    cmnSerializeRaw(outputStream__cdg, this->component);
    cmnSerializeRaw(outputStream__cdg, this->interface);
    cmnSerializeRaw(outputStream__cdg, this->base_frame);
}


void dvrk::arm_proxy_configuration::DeSerializeRaw(std::istream & inputStream__cdg)
{
    cmnDeSerializeRaw(inputStream__cdg, this->name);
    cmnDeSerializeRaw(inputStream__cdg, this->name_on_IO);
    cmnDeSerializeRaw(inputStream__cdg, this->type);
    cmnDeSerializeRaw(inputStream__cdg, this->IO);
    cmnDeSerializeRaw(inputStream__cdg, this->serial);
    cmnDeSerializeRaw(inputStream__cdg, this->simulation);
    cmnDeSerializeRaw(inputStream__cdg, this->arm_file);
    cmnDeSerializeRaw(inputStream__cdg, this->PID_file);
    cmnDeSerializeRaw(inputStream__cdg, this->IO_file);
    cmnDeSerializeRaw(inputStream__cdg, this->IO_gripper_file);
    cmnDeSerializeRaw(inputStream__cdg, this->period);
    cmnDeSerializeRaw(inputStream__cdg, this->PID_period);
    cmnDeSerializeRaw(inputStream__cdg, this->skip_ROS_bridge);
    cmnDeSerializeRaw(inputStream__cdg, this->component);
    cmnDeSerializeRaw(inputStream__cdg, this->interface);
    cmnDeSerializeRaw(inputStream__cdg, this->base_frame);
}


void dvrk::arm_proxy_configuration::ToStream(std::ostream & outputStream__cdg) const
{
    outputStream__cdg << this->HumanReadable();
}

void dvrk::arm_proxy_configuration::ToStreamRaw(std::ostream & outputStream__cdg, const char delimiter__cdg, bool headerOnly__cdg, const std::string & headerPrefix__cdg) const
{
    if (headerOnly__cdg) {
        outputStream__cdg << cmnData<dvrk::arm_proxy_configuration >::SerializeDescription(*this, delimiter__cdg, headerPrefix__cdg);
    } else {
        cmnData<dvrk::arm_proxy_configuration >::SerializeText(*this, outputStream__cdg, delimiter__cdg);
    }
}
/* source line: 26 */
/* source line: 32 */
/* source line: 39 */
/* source line: 45 */
/* source line: 52 */
/* source line: 59 */
/* source line: 66 */
/* source line: 73 */
/* source line: 80 */
/* source line: 87 */
/* source line: 94 */
/* source line: 101 */
/* source line: 109 */
/* source line: 116 */
/* source line: 124 */
/* source line: 132 */
/* default functions */
void cmnSerializeRaw(std::ostream & outputStream, const dvrk::arm_proxy_configuration & object)
{
    object.SerializeRaw(outputStream);
}
void cmnDeSerializeRaw(std::istream & inputStream, dvrk::arm_proxy_configuration & placeHolder)
{
    placeHolder.DeSerializeRaw(inputStream);
}
/* data functions */
void dvrk::arm_proxy_configuration::Copy(const dvrk::arm_proxy_configuration & source__cdg) {
    cmnData<std::string >::Copy(this->name, source__cdg.name);
    cmnData<std::string >::Copy(this->name_on_IO, source__cdg.name_on_IO);
    cmnData<dvrk::arm_type >::Copy(this->type, source__cdg.type);
    cmnData<std::string >::Copy(this->IO, source__cdg.IO);
    cmnData<std::string >::Copy(this->serial, source__cdg.serial);
    cmnData<dvrk::simulation >::Copy(this->simulation, source__cdg.simulation);
    cmnData<std::string >::Copy(this->arm_file, source__cdg.arm_file);
    cmnData<std::string >::Copy(this->PID_file, source__cdg.PID_file);
    cmnData<std::string >::Copy(this->IO_file, source__cdg.IO_file);
    cmnData<std::string >::Copy(this->IO_gripper_file, source__cdg.IO_gripper_file);
    cmnData<double >::Copy(this->period, source__cdg.period);
    cmnData<double >::Copy(this->PID_period, source__cdg.PID_period);
    cmnData<bool >::Copy(this->skip_ROS_bridge, source__cdg.skip_ROS_bridge);
    cmnData<std::string >::Copy(this->component, source__cdg.component);
    cmnData<std::string >::Copy(this->interface, source__cdg.interface);
    cmnData<dvrk::base_frame >::Copy(this->base_frame, source__cdg.base_frame);
}
void dvrk::arm_proxy_configuration::SerializeBinary(std::ostream & outputStream__cdg) const CISST_THROW(std::runtime_error) {
    cmnData<std::string >::SerializeBinary(this->name, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->name_on_IO, outputStream__cdg);
    cmnData<dvrk::arm_type >::SerializeBinary(this->type, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->IO, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->serial, outputStream__cdg);
    cmnData<dvrk::simulation >::SerializeBinary(this->simulation, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->arm_file, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->PID_file, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->IO_file, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->IO_gripper_file, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->period, outputStream__cdg);
    cmnData<double >::SerializeBinary(this->PID_period, outputStream__cdg);
    cmnData<bool >::SerializeBinary(this->skip_ROS_bridge, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->component, outputStream__cdg);
    cmnData<std::string >::SerializeBinary(this->interface, outputStream__cdg);
    cmnData<dvrk::base_frame >::SerializeBinary(this->base_frame, outputStream__cdg);
}
void dvrk::arm_proxy_configuration::DeSerializeBinary(std::istream & inputStream__cdg,
                                            const cmnDataFormat & localFormat,
                                            const cmnDataFormat & remoteFormat) CISST_THROW(std::runtime_error) {
    cmnData<std::string >::DeSerializeBinary(this->name, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->name_on_IO, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::arm_type >::DeSerializeBinary(this->type, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->IO, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->serial, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::simulation >::DeSerializeBinary(this->simulation, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->arm_file, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->PID_file, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->IO_file, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->IO_gripper_file, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->period, inputStream__cdg, localFormat, remoteFormat);
    cmnData<double >::DeSerializeBinary(this->PID_period, inputStream__cdg, localFormat, remoteFormat);
    cmnData<bool >::DeSerializeBinary(this->skip_ROS_bridge, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->component, inputStream__cdg, localFormat, remoteFormat);
    cmnData<std::string >::DeSerializeBinary(this->interface, inputStream__cdg, localFormat, remoteFormat);
    cmnData<dvrk::base_frame >::DeSerializeBinary(this->base_frame, inputStream__cdg, localFormat, remoteFormat);
}
void dvrk::arm_proxy_configuration::SerializeText(std::ostream & outputStream__cdg, const char delimiter__cdg) const CISST_THROW(std::runtime_error) {
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
    cmnData<std::string >::SerializeText(this->name_on_IO, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::arm_type >::SerializeText(this->type, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->IO, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->serial, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::simulation >::SerializeText(this->simulation, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->arm_file, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->PID_file, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->IO_file, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->IO_gripper_file, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->period, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<double >::SerializeText(this->PID_period, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<bool >::SerializeText(this->skip_ROS_bridge, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->component, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<std::string >::SerializeText(this->interface, outputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        outputStream__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    cmnData<dvrk::base_frame >::SerializeText(this->base_frame, outputStream__cdg, delimiter__cdg);
}
std::string dvrk::arm_proxy_configuration::SerializeDescription(const char delimiter__cdg, const std::string & userDescription__cdg) const {
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
    description__cdg << cmnData<std::string >::SerializeDescription(this->name_on_IO, delimiter__cdg, prefix__cdg + "name_on_IO");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::arm_type >::SerializeDescription(this->type, delimiter__cdg, prefix__cdg + "type");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->IO, delimiter__cdg, prefix__cdg + "IO");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->serial, delimiter__cdg, prefix__cdg + "serial");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::simulation >::SerializeDescription(this->simulation, delimiter__cdg, prefix__cdg + "simulation");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->arm_file, delimiter__cdg, prefix__cdg + "arm_file");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->PID_file, delimiter__cdg, prefix__cdg + "PID_file");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->IO_file, delimiter__cdg, prefix__cdg + "IO_file");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->IO_gripper_file, delimiter__cdg, prefix__cdg + "IO_gripper_file");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->period, delimiter__cdg, prefix__cdg + "period");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<double >::SerializeDescription(this->PID_period, delimiter__cdg, prefix__cdg + "PID_period");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<bool >::SerializeDescription(this->skip_ROS_bridge, delimiter__cdg, prefix__cdg + "skip_ROS_bridge");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->component, delimiter__cdg, prefix__cdg + "component");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<std::string >::SerializeDescription(this->interface, delimiter__cdg, prefix__cdg + "interface");
    if (someData__cdg) {
        description__cdg << delimiter__cdg;
    }
    someData__cdg = true;
    description__cdg << cmnData<dvrk::base_frame >::SerializeDescription(this->base_frame, delimiter__cdg, prefix__cdg + "base_frame");
    return description__cdg.str();
}
void dvrk::arm_proxy_configuration::DeSerializeText(std::istream & inputStream__cdg,
                                          const char delimiter__cdg) CISST_THROW(std::runtime_error) {
    bool someData__cdg = false;
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->name_on_IO, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::arm_type >::DeSerializeText(this->type, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->IO, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->serial, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::simulation >::DeSerializeText(this->simulation, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->arm_file, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->PID_file, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->IO_file, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->IO_gripper_file, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->period, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<double >::DeSerializeText(this->PID_period, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<bool >::DeSerializeText(this->skip_ROS_bridge, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->component, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<std::string >::DeSerializeText(this->interface, inputStream__cdg, delimiter__cdg);
    if (someData__cdg) {
        cmnDataDeSerializeTextDelimiter(inputStream__cdg, delimiter__cdg, "dvrk::arm_proxy_configuration");
    }
    someData__cdg = true;
    cmnData<dvrk::base_frame >::DeSerializeText(this->base_frame, inputStream__cdg, delimiter__cdg);
}
std::string dvrk::arm_proxy_configuration::HumanReadable(void) const {
    std::stringstream description__cdg;
    description__cdg << "dvrk::arm_proxy_configuration" << std::endl;
    description__cdg << "  name:" << cmnData<std::string >::HumanReadable(this->name);
    description__cdg << "  name_on_IO:" << cmnData<std::string >::HumanReadable(this->name_on_IO);
    description__cdg << "  type:" << cmnData<dvrk::arm_type >::HumanReadable(this->type);
    description__cdg << "  IO:" << cmnData<std::string >::HumanReadable(this->IO);
    description__cdg << "  serial:" << cmnData<std::string >::HumanReadable(this->serial);
    description__cdg << "  simulation:" << cmnData<dvrk::simulation >::HumanReadable(this->simulation);
    description__cdg << "  arm_file:" << cmnData<std::string >::HumanReadable(this->arm_file);
    description__cdg << "  PID_file:" << cmnData<std::string >::HumanReadable(this->PID_file);
    description__cdg << "  IO_file:" << cmnData<std::string >::HumanReadable(this->IO_file);
    description__cdg << "  IO_gripper_file:" << cmnData<std::string >::HumanReadable(this->IO_gripper_file);
    description__cdg << "  period:" << cmnData<double >::HumanReadable(this->period);
    description__cdg << "  PID_period:" << cmnData<double >::HumanReadable(this->PID_period);
    description__cdg << "  skip_ROS_bridge:" << cmnData<bool >::HumanReadable(this->skip_ROS_bridge);
    description__cdg << "  component:" << cmnData<std::string >::HumanReadable(this->component);
    description__cdg << "  interface:" << cmnData<std::string >::HumanReadable(this->interface);
    description__cdg << "  base_frame:" << cmnData<dvrk::base_frame >::HumanReadable(this->base_frame);
    return description__cdg.str();
}
bool dvrk::arm_proxy_configuration::ScalarNumberIsFixed(void) const {
    return true
           && cmnData<std::string >::ScalarNumberIsFixed(this->name)
           && cmnData<std::string >::ScalarNumberIsFixed(this->name_on_IO)
           && cmnData<dvrk::arm_type >::ScalarNumberIsFixed(this->type)
           && cmnData<std::string >::ScalarNumberIsFixed(this->IO)
           && cmnData<std::string >::ScalarNumberIsFixed(this->serial)
           && cmnData<dvrk::simulation >::ScalarNumberIsFixed(this->simulation)
           && cmnData<std::string >::ScalarNumberIsFixed(this->arm_file)
           && cmnData<std::string >::ScalarNumberIsFixed(this->PID_file)
           && cmnData<std::string >::ScalarNumberIsFixed(this->IO_file)
           && cmnData<std::string >::ScalarNumberIsFixed(this->IO_gripper_file)
           && cmnData<double >::ScalarNumberIsFixed(this->period)
           && cmnData<double >::ScalarNumberIsFixed(this->PID_period)
           && cmnData<bool >::ScalarNumberIsFixed(this->skip_ROS_bridge)
           && cmnData<std::string >::ScalarNumberIsFixed(this->component)
           && cmnData<std::string >::ScalarNumberIsFixed(this->interface)
           && cmnData<dvrk::base_frame >::ScalarNumberIsFixed(this->base_frame)
    ;
}
size_t dvrk::arm_proxy_configuration::ScalarNumber(void) const {
    return 0
           + cmnData<std::string >::ScalarNumber(this->name)
           + cmnData<std::string >::ScalarNumber(this->name_on_IO)
           + cmnData<dvrk::arm_type >::ScalarNumber(this->type)
           + cmnData<std::string >::ScalarNumber(this->IO)
           + cmnData<std::string >::ScalarNumber(this->serial)
           + cmnData<dvrk::simulation >::ScalarNumber(this->simulation)
           + cmnData<std::string >::ScalarNumber(this->arm_file)
           + cmnData<std::string >::ScalarNumber(this->PID_file)
           + cmnData<std::string >::ScalarNumber(this->IO_file)
           + cmnData<std::string >::ScalarNumber(this->IO_gripper_file)
           + cmnData<double >::ScalarNumber(this->period)
           + cmnData<double >::ScalarNumber(this->PID_period)
           + cmnData<bool >::ScalarNumber(this->skip_ROS_bridge)
           + cmnData<std::string >::ScalarNumber(this->component)
           + cmnData<std::string >::ScalarNumber(this->interface)
           + cmnData<dvrk::base_frame >::ScalarNumber(this->base_frame)
    ;
}
std::string dvrk::arm_proxy_configuration::ScalarDescription(const size_t index_cdg, const std::string & userDescription__cdg) const CISST_THROW(std::out_of_range) {
    std::string prefix__cdg = (userDescription__cdg == "") ? "" : (userDescription__cdg + ".");
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name, index_cdg - baseIndex__cdg, prefix__cdg + "name");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name_on_IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->name_on_IO, index_cdg - baseIndex__cdg, prefix__cdg + "name_on_IO");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::arm_type >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::arm_type >::ScalarDescription(this->type, index_cdg - baseIndex__cdg, prefix__cdg + "type");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->IO, index_cdg - baseIndex__cdg, prefix__cdg + "IO");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->serial);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->serial, index_cdg - baseIndex__cdg, prefix__cdg + "serial");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::simulation >::ScalarNumber(this->simulation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::simulation >::ScalarDescription(this->simulation, index_cdg - baseIndex__cdg, prefix__cdg + "simulation");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->arm_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->arm_file, index_cdg - baseIndex__cdg, prefix__cdg + "arm_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->PID_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->PID_file, index_cdg - baseIndex__cdg, prefix__cdg + "PID_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->IO_file, index_cdg - baseIndex__cdg, prefix__cdg + "IO_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO_gripper_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->IO_gripper_file, index_cdg - baseIndex__cdg, prefix__cdg + "IO_gripper_file");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->period, index_cdg - baseIndex__cdg, prefix__cdg + "period");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PID_period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::ScalarDescription(this->PID_period, index_cdg - baseIndex__cdg, prefix__cdg + "PID_period");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->skip_ROS_bridge);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::ScalarDescription(this->skip_ROS_bridge, index_cdg - baseIndex__cdg, prefix__cdg + "skip_ROS_bridge");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->component);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->component, index_cdg - baseIndex__cdg, prefix__cdg + "component");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->interface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::ScalarDescription(this->interface, index_cdg - baseIndex__cdg, prefix__cdg + "interface");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::base_frame >::ScalarNumber(this->base_frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::base_frame >::ScalarDescription(this->base_frame, index_cdg - baseIndex__cdg, prefix__cdg + "base_frame");
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalarDescription: dvrk::arm_proxy_configuration index out of range"));
    return "";
}
double dvrk::arm_proxy_configuration::Scalar(const size_t index_cdg) const CISST_THROW(std::out_of_range) {
    size_t baseIndex__cdg = 0;
    size_t currentMaxIndex__cdg = 0;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->name_on_IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->name_on_IO, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::arm_type >::ScalarNumber(this->type);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::arm_type >::Scalar(this->type, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->IO, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->serial);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->serial, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::simulation >::ScalarNumber(this->simulation);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::simulation >::Scalar(this->simulation, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->arm_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->arm_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->PID_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->PID_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->IO_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->IO_gripper_file);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->IO_gripper_file, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->period, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<double >::ScalarNumber(this->PID_period);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<double >::Scalar(this->PID_period, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<bool >::ScalarNumber(this->skip_ROS_bridge);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<bool >::Scalar(this->skip_ROS_bridge, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->component);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->component, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<std::string >::ScalarNumber(this->interface);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<std::string >::Scalar(this->interface, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    currentMaxIndex__cdg += cmnData<dvrk::base_frame >::ScalarNumber(this->base_frame);
    if (index_cdg < currentMaxIndex__cdg) {
        return cmnData<dvrk::base_frame >::Scalar(this->base_frame, index_cdg - baseIndex__cdg);
    }
    baseIndex__cdg = currentMaxIndex__cdg;
    cmnThrow(std::out_of_range("cmnDataScalar: dvrk::arm_proxy_configuration index out of range"));
    return 1.2345;
}
#if CISST_HAS_JSON
template <>
void cmnDataJSON<dvrk::arm_proxy_configuration >::SerializeText(const dvrk::arm_proxy_configuration & data, Json::Value & jsonValue) {
    data.SerializeTextJSON(jsonValue);
}
void dvrk::arm_proxy_configuration::SerializeTextJSON(Json::Value & jsonValue) const {
    cmnDataJSON<std::string >::SerializeText(this->name, jsonValue["name"]);
    cmnDataJSON<std::string >::SerializeText(this->name_on_IO, jsonValue["name_on_IO"]);
    cmnDataJSON<dvrk::arm_type >::SerializeText(this->type, jsonValue["type"]);
    cmnDataJSON<std::string >::SerializeText(this->IO, jsonValue["IO"]);
    cmnDataJSON<std::string >::SerializeText(this->serial, jsonValue["serial"]);
    cmnDataJSON<dvrk::simulation >::SerializeText(this->simulation, jsonValue["simulation"]);
    cmnDataJSON<std::string >::SerializeText(this->arm_file, jsonValue["arm_file"]);
    cmnDataJSON<std::string >::SerializeText(this->PID_file, jsonValue["PID_file"]);
    cmnDataJSON<std::string >::SerializeText(this->IO_file, jsonValue["IO_file"]);
    cmnDataJSON<std::string >::SerializeText(this->IO_gripper_file, jsonValue["IO_gripper_file"]);
    cmnDataJSON<double >::SerializeText(this->period, jsonValue["period"]);
    cmnDataJSON<double >::SerializeText(this->PID_period, jsonValue["PID_period"]);
    cmnDataJSON<bool >::SerializeText(this->skip_ROS_bridge, jsonValue["skip_ROS_bridge"]);
    cmnDataJSON<std::string >::SerializeText(this->component, jsonValue["component"]);
    cmnDataJSON<std::string >::SerializeText(this->interface, jsonValue["interface"]);
    cmnDataJSON<dvrk::base_frame >::SerializeText(this->base_frame, jsonValue["base_frame"]);
}
template<>
void cmnDataJSON<dvrk::arm_proxy_configuration >::DeSerializeText(dvrk::arm_proxy_configuration & data, const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
    data.DeSerializeTextJSON(jsonValue);
}
void dvrk::arm_proxy_configuration::DeSerializeTextJSON(const Json::Value & jsonValue) CISST_THROW(std::runtime_error) {
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
    field__cdg = jsonValue["name_on_IO"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->name_on_IO, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < name_on_IO");
        }
    };
    field__cdg = jsonValue["type"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::arm_type >::DeSerializeText(this->type, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < type");
        }
    } else {
        cmnThrow("cmnDataJson<dvrk::arm_type>::DeSerializeText: empty JSON value for: type");
    };
    field__cdg = jsonValue["IO"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->IO, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO");
        }
    };
    field__cdg = jsonValue["serial"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->serial, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < serial");
        }
    };
    field__cdg = jsonValue["simulation"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::simulation >::DeSerializeText(this->simulation, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < simulation");
        }
    };
    field__cdg = jsonValue["arm_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->arm_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < arm_file");
        }
    };
    field__cdg = jsonValue["PID_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->PID_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < PID_file");
        }
    };
    field__cdg = jsonValue["IO_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->IO_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO_file");
        }
    };
    field__cdg = jsonValue["IO_gripper_file"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->IO_gripper_file, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < IO_gripper_file");
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
    field__cdg = jsonValue["PID_period"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<double >::DeSerializeText(this->PID_period, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < PID_period");
        }
    };
    field__cdg = jsonValue["skip_ROS_bridge"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<bool >::DeSerializeText(this->skip_ROS_bridge, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < skip_ROS_bridge");
        }
    };
    field__cdg = jsonValue["component"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->component, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < component");
        }
    };
    field__cdg = jsonValue["interface"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<std::string >::DeSerializeText(this->interface, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < interface");
        }
    };
    field__cdg = jsonValue["base_frame"];
    if (!field__cdg.empty()) {
        try {
            cmnDataJSON<dvrk::base_frame >::DeSerializeText(this->base_frame, field__cdg);
        } catch (std::exception & e) {
            cmnThrow(std::string(e.what()) + " < base_frame");
        }
    };
}
#endif // CISST_HAS_JSON

