# Frontend Task: Dashboard with JSON Server

### Objective:
Build a simple React application that fetches and displays mock user data from a JSON Server API.

### Steps:

1. Set up JSON Server:
   • Create a db.json file with mock data for users, activities, and notifications.
   • Run JSON Server to simulate the API (e.g., npx json-server --watch db.json --port 5000).

2. Create React App:
   • Set up components to display user profile, recent activities, and notifications.
   • Use useEffect to fetch data from the API (GET /users, GET /activities, GET /notifications).
   • Display the fetched data dynamically in each section.

3. Style the Dashboard:
   • Use Tailwind CSS to create a responsive and clean layout.
