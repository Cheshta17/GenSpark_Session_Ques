import React, { useEffect, useState } from "react";
import { FiActivity } from "react-icons/fi";

const RecentActivities = () => {
  const [activities, setActivities] = useState([]);

  useEffect(() => {
    fetch("http://localhost:5000/activities")
      .then((res) => res.json())
      .then((data) => setActivities(data));
  }, []);

  return (
    <div className="bg-white p-6 rounded-lg shadow-md">
      <div className="flex items-center mb-4">
        <FiActivity className="text-2xl text-green-600" />
        <h2 className="text-xl font-semibold ml-2">Recent Activities</h2>
      </div>
      <ul className="list-none">
        {activities.map((activity) => (
          <li
            key={activity.id}
            className="mb-3 p-3 border border-gray-200 rounded-md hover:shadow-lg"
          >
            <p className="font-medium">{activity.description}</p>
            <p className="text-sm text-gray-500">{activity.timestamp}</p>
          </li>
        ))}
      </ul>
    </div>
  );
};

export default RecentActivities;