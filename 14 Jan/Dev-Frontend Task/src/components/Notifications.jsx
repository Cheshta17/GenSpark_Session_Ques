import React, { useEffect, useState } from "react";
import { MdNotifications } from "react-icons/md";

const Notifications = () => {
  const [notifications, setNotifications] = useState([]);

  useEffect(() => {
    fetch("http://localhost:5000/notifications")
      .then((res) => res.json())
      .then((data) => setNotifications(data));
  }, []);

  return (
    <div className="bg-white p-6 rounded-lg shadow-md">
      <div className="flex items-center mb-4">
        <MdNotifications className="text-2xl text-blue-600" />
        <h2 className="text-xl font-semibold ml-2">Notifications</h2>
      </div>
      <ul className="list-none">
        {notifications.map((notification) => (
          <li
            key={notification.id}
            className="mb-3 p-3 border border-gray-200 rounded-md hover:shadow-lg"
          >
            <p className="font-medium">{notification.message}</p>
            <p className="text-sm text-gray-500">{notification.timestamp}</p>
          </li>
        ))}
      </ul>
    </div>
  );
};

export default Notifications;