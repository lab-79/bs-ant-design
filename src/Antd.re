module Affix = Antd_Affix;

module Alert = Antd_Alert;

module AutoComplete = Antd_AutoComplete;

module Avatar = Antd_Avatar;

module Badge = Antd_Badge;

module Breadcrumb = Antd_Breadcrumb;

module Button = Antd_Button;

module Calendar = Antd_Calendar;

module Card = Antd_Card;

module Checkbox = Antd_Checkbox;

module Collapse = Antd_Collapse;

module Panel = Antd_Collapse.Panel;

module DatePicker = Antd_DatePicker;

module Divider = Antd_Divider;

module Dropdown = Antd_Dropdown;

module Form = Antd_Form;

module Grid = Antd_Grid;

module Icon = Antd_IconUnsafe;

module IconUnsafe = Antd_Icon;

module IconName = Antd_IconName;

module Input = Antd_Input;

module InputNumber = Antd_InputNumber;

module Layout = Antd_Layout;

module List = Antd_List;

module Header = Antd_Layout.Header;

module Content = Antd_Layout.Content;

module Footer = Antd_Layout.Footer;

module LocaleProvider = Antd_LocaleProvider;

module Menu = Antd_Menu;

module Modal = Antd_Modal;

module Popconfirm = Antd_Popconfirm;

module Popover = Antd_Popover;

module Radio = Antd_Radio;

module Rate = Antd_Rate;

module Select = Antd_Select;

module Skeleton = Antd_Skeleton;

module Spin = Antd_Spin;

module Steps = Antd_Steps;

module Switch = Antd_Switch;

module Table = Antd_Table;

module Tabs = Antd_Tabs;

module TabPane = Antd_Tabs.TabPane;

module Tag = Antd_Tag;

module CheckableTag = Antd_Tag.CheckableTag;

module Timeline = Antd_Timeline;

module TimePicker = Antd_TimePicker;

module Tooltip = Antd_Tooltip;

module Upload = Antd_Upload;

module Pagination = Antd_Pagination;

module Progress = Antd_Progress;

module TreeSelect = Antd_TreeSelect;

/*
 module Message = {
   type content = ReasonReact.reactElement;
   type duration = int;
   type options;
   type callback = (. unit) => unit;
   [@bs.module "antd/lib/message"] external success: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external error: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external info: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external warning: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external warn: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external loading: (content, duration, callback) => unit = "";
   [@bs.module "antd/lib/message"] external config: options => unit = "";
   [@bs.module "antd/lib/message"] external destroy: unit => unit = "";
 };
 */

module Message = {
  [%bs.raw {|require("antd/lib/message/style")|}];

  type content = ReasonReact.reactElement;
  type duration = int;
  type options;
  type callback = (. unit) => unit;
  [@bs.module "antd/lib/message"]
  external success: (content, duration) => unit = "";
  [@bs.module "antd/lib/message"]
  external error: (content, duration) => unit = "";
  [@bs.module "antd/lib/message"]
  external info: (content, duration) => unit = "";
  [@bs.module "antd/lib/message"]
  external warning: (content, duration) => unit = "";
  [@bs.module "antd/lib/message"]
  external warn: (content, duration) => unit = "";
  [@bs.module "antd/lib/message"]
  external loading: (content, duration) => unit = "";
  [@bs.module "antd/lib/message"] external config: options => unit = "";
  [@bs.module "antd/lib/message"] external destroy: unit => unit = "";
};

/*
 notification.success(config)
 notification.error(config)
 notification.info(config)
 notification.warning(config)
 notification.warn(config)
 notification.open(config)
 notification.close(key: String)
 notification.destroy()
 */

module Notification = {
  [%bs.raw {|require("antd/lib/notification/style")|}];

  type stringOrNode;
  [@bs.deriving abstract]
  type options = {
    .
    "message": ReasonReact.reactElement,
    "description": ReasonReact.reactElement,
  };
  type key = string;
  [@bs.module "antd/lib/notification"] external success: options => unit = "";
  [@bs.module "antd/lib/notification"] external error: options => unit = "";
  [@bs.module "antd/lib/notification"] external info: options => unit = "";
  [@bs.module "antd/lib/notification"] external warning: options => unit = "";
  [@bs.module "antd/lib/notification"] external warn: options => unit = "";
  [@bs.module "antd/lib/notification"] external close: key => unit = "";
  [@bs.module "antd/lib/notification"] external destroy: unit => unit = "";
  [@bs.module "antd/lib/notification"] external config: options => unit = "";
};