open! Antd;

let str = React.string;

[@react.component]
let make = () =>
  <Section name="Datepicker">
    <div>
      <DatePicker />
      <br />
      <DatePicker.MonthPicker placeholder="Select month" />
      <br />
      <DatePicker.RangePicker />
      <br />
      <DatePicker.WeekPicker placeholder="Select week" />
    </div>
  </Section>;